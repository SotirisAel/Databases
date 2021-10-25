/*
 * stacks.cpp
 *
 *  Created on: Oct 23, 2021
 *      Author: Sotiris
 */
#include<iostream>
#include<stack>
#include<string>
#include"stacks.h"
using namespace std;

/*Constructor*/
template <typename E>
stacks<E>::stacks(){}

/*Destructor*/
template <typename E>
stacks<E>::~stacks(){}

/*Clear stack function*/
template <typename E>
void stacks<E>::clearstack(){
	if(mystack.size()>0){
		cout<<"Item popped: "<<mystack.top()<<endl;
		mystack.pop();
		clearstack();
	}
}

/*Define possible types*/
template class stacks<int>;
template class stacks<float>;
template class stacks<string>;


