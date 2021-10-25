/*
 * main.cpp
 *
 *  Created on: Oct 23, 2021
 *      Author: Sotiris
 */

#include<iostream>
#include<stack>
#include<string>
#include"stacks.h"
#include"stacks.cpp"
using namespace std;

int main(){

	/*Small program to test function*/
	stacks<int>* test1 = new stacks<int>;

	test1->mystack.push(5);
	test1->mystack.push(7);
	test1->mystack.push(9);

	cout<<"Clearing stack..."<<endl;
	test1->clearstack();

	delete(test1);
	cout<<endl<<endl;

	stacks<string>* test2 = new stacks<string>;

	test2->mystack.push("Hello");
	test2->mystack.push("World");

	cout<<"Clearing stack..."<<endl;
	test2->clearstack();

	delete(test2);

	system("pause");
	return 0;
}

