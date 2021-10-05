/*
 * Progression.cpp
 *
 *  Created on: Sep 28, 2021
 *      Author: Sotiris
 */

#include<iostream>
#include "Progression.h"
using namespace std;

/*Child class functions*/

/*Arithmetic Class*/
ArithProgression::ArithProgression(int a): Progression(), add(a) { } //if starting value is different, change variable to that

void ArithProgression::printProgression(int n) {
	/*Printing*/
	for(int i=0;i<n;i++){
		cout<<cur<<", ";
		cur += add;
	}
	cout<<"..."<<endl<<endl;
}


/*Geometric Class*/
GeomProgression::GeomProgression(int b): Progression(), base(b) { } //if starting value is different, change variable to that

void GeomProgression::printProgression(int n) {
	/*Printing*/
	for(int i=0;i<n;i++){
		cout<<cur<<", ";
		cur *= base;
		}
	cout<<"..."<<endl<<endl;
}


/*Fibonacci Class*/
FibonacciProgression::FibonacciProgression(int p, int c): Progression(), prev(p),cur(c) { }	//if starting values are different, change variables to those

void FibonacciProgression::printProgression(int n){
	/*Printing*/
	cout<<prev<<", "<<cur<<", ";	//print first 2 values
	for(int i=0;i<n;i++){
		int temp = prev;
			prev = cur;
			cur += temp;
			cout<<cur<<", ";		//calculate next based on previous 2 numbers
			}
		cout<<"..."<<endl<<endl;
	}
