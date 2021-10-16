/*
 * main.cpp
 *
 *  Created on: Oct 9, 2021
 *      Author: Sotiris
 */

#include<iostream>
#include<cmath>
using namespace std;

void PrintAllSets(int array1[],int array2[], int cnt, int n, int i, bool flag)
{

	/*Conditions: flag=1 means I am on the first array, 0 means second array
	 * 			  cnt=2^n
	 * 			  i=index
	 */

	/*Print first array*/
	if((i<cnt)&&flag){
		for (int j = 0; j < n; j++)
			if ((i & (1 << j)) != 0)		//Bitwise check, shift 1 by j places, and then match if it matches with my binary index
				cout << array1[j] << " ";	//If true then print the number in that position
	}

	/*Check if the first array is done and make flag and cnt 0 to enter 3rd else if*/
	else if((i==cnt)&&flag){
		cout<<"\n\nArray2: \n";
		PrintAllSets(array1,array2,cnt,n,0,0);
	}
	/*Print second array*/
	else if((i<cnt)&&(!flag)){
		for (int j = 0; j < n; j++)
			if ((i & (1 << j)) != 0)		//Bitwise check, shift 1 by j places, and then check if it matches with my index
				cout << array2[j] << " ";	//If true then print the number in that position
	}
	cout <<endl;

	/*Check if both arrays have finished printing, else repeat i+1*/
	if(!((i==cnt)&&(!flag)))
		PrintAllSets(array1,array2,cnt,n,i+1,flag);
	else{
		system("pause");
		exit(1);	//exit condition
	}
  }


int main(){
	int n;
	cout<<"Enter N value: ";
	cin>>n;
	int array1[n],array2[n];
	cout<<"\nEnter values for array 1: ";
	for(int i=0;i<n;i++)
		cin>>array1[i];
	cout<<"\nEnter values for array 2: ";
	for(int i=0;i<n;i++)
		cin>>array2[i];
	cout<<"\nOutput: \n";
	cout<<"\n\nArray 1:\n";
	int cnt = pow(2,n);
	PrintAllSets(array1,array2,cnt,n,0,1);
}


