/*
 * main.cpp
 *
 *  Created on: Sep 23, 2021
 *      Author: Sotiris
 */

#include <iostream>
#include <vector>
#include "BubbleSort.h"

using namespace std;

int main(){

	/*Initial Declerations*/
	BubbleSort sort;
	int a, i=0;
	vector<int> vect; 				//Using vectors for an undefined amount of numbers

	/*User Input*/
	cout<<"Enter numbers in random order (enter 0 to finish): ";
	while(cin>>a){
		if(a!=0)
			vect.push_back(int(a));
		else break;					//if 0 end loop
	}

	sort.bubbleSort(vect,i); 			//class algorithm call

	/*Printing*/
	cout<<"List of numbers in order: ";
	for(unsigned int i=0;i<vect.size()-1;i++)	//print up to last number, using unsigned to avoid warning as vect.size() returns unsigned
		printf("%d, ",vect[i]);
	cout<<vect.back()<<endl<<endl;		//print last number without ,


	system("pause");
	return 0;
}

