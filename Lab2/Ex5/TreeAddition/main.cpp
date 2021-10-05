/*
 * main.cpp
 *
 *  Created on: Sep 27, 2021
 *      Author: Sotiris
 */

/*Library Declerations*/
#include <iostream>
#include "adder.h"
#define SIZE 50

/*Main Function*/
int main(){

	/*Initial Declerations*/
	int arr[SIZE][SIZE]={0};
	int i=0,num,cnt=0;

	/*Class initializer*/
	Adder myclass;

	/*User input*/
	cout<<"How many numbers? ";
	cin>>num;
	cout<<"Enter numbers: ";
	for (i=0;i<num;i++){
		cin>>arr[0][i];
		cnt++;
	}

	/*Calculations*/
	i=1;
	cout<<"Output: \n";
	myclass.add(arr,i,cnt-1);

	/*Print initial list*/
	for (int i=0;i<num;i++)
		cout<<arr[0][i]<<" ";

	cout<<endl;
	system("pause");
	return 0;
}

