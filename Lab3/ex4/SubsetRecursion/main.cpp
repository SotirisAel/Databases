/*
 * main.cpp
 *
 *  Created on: Oct 9, 2021
 *      Author: Sotiris
 */

#include<iostream>
using namespace std;

void PrintAllSets(int array1[], int array2[],int n,int i){
	cout<<array1[i]<<" "<<array2[i]<<" ";
	if(i<n-1)
		PrintAllSets(array1,array2,n,i+1);
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
	cout<<"\nOutput: ";
	PrintAllSets(array1,array2,n,0);
	return 0;
	system("pause");
}


