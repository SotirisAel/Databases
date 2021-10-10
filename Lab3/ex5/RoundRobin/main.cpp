/*
 * main.cpp
 *
 *  Created on: Oct 10, 2021
 *      Author: Sotiris
 */

#include<iostream>
#include<string>
#include"roundrobin.h"
#include <windows.h>
#include <ctype.h>
#include <vector>
using namespace std;

/*Table Printing code*/
COORD coord = { 0, 0 };

void gotoxy(int x, int y) {
    coord.X = x; coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

/*Main Function*/
int main(){

	/*Initial Declerations*/
	int time,
		temp,
		i=1;
	char ready[]="READY";
	char running[]="RUNNING";
	vector<int> vect;
	CircleList *processblock;

	processblock = new CircleList();	//create List
	cout<<"Give time-slot: ";
	cin>>time;							//enter time quantum

	processblock->change_time(time);	//send it to class

	cout<<"Give process durations (give 0 to finish): ";
	//Use vector to add as many processes as we want
	while(cin>>temp){
		if(temp==0)
			break;
		else{
			vect.push_back(temp);
			i++;
		}
	}

	//Create unique process ID's using vector size, and assing their runtime value, then delete vector values
	//This way, when a user inputs processes in order, they are not reversed in the list
	while(!vect.empty()){
		processblock->add(std::to_string(vect.size()),vect[vect.size()-1]);
		vect.pop_back();
	}

	processblock->advance();
	processblock->set_quantity(i);

	/*Table Headers*/
	gotoxy(12, 5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PROCESS MANAGER \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(0, 6);
    printf("==============================================================================");

    gotoxy(0, 7);
    printf("PROCESS ID\t\t REMAINING TIME\t\tSTATUS\t\tWAITING TIME\n");

    gotoxy(0, 8);
    printf("==============================================================================");
	gotoxy(0,10);

    /*Data Printing*/

	/*Print everything initially*/
	for(int j=0;j<i-1;j++){
		cout<<processblock->back();
		if(j==0)
			printf("%30d%24s\n",processblock->return_time(),running);
		else
			if (j<9)
				printf("%30d%22s\n",processblock->return_time(),ready);
			else
				printf("%29d%22s\n",processblock->return_time(),ready);
		processblock->advance();

	}

	/*Calculations*/
	while(true){
		processblock->processing();
		processblock->advance();
	}
}
