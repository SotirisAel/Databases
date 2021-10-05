/*
 * adder.cpp
 *
 *  Created on: Sep 27, 2021
 *      Author: Sotiris
 */

#include<iostream>
#include "adder.h"
#define SIZE 50
using namespace std;


void Adder::add(int arr[][SIZE], int i,int total){

	/*Recursion Tree*/
	if(i<=total){										//Check how many floors to create
		for(int j=0;j<total-i+1;j++)					//Every floor, numbers decrease by 1
			arr[i][j]=arr[i-1][j]+arr[i-1][j+1];		//Add 2 previous numbers
		add(arr,i+1,total);								//Recall function for next floor
	}

	/*Print Tree*/
    for(int j=0;j<=total;j++)
    	if (arr[i][j]!=0){								//Check for empty spaces
    		cout<<arr[i][j]<<" ";
    	}
	cout<<endl;
	i--;												//Go to lower floor
}

