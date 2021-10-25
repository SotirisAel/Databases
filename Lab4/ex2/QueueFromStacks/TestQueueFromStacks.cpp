/*
 * TestQueueFromStacks.cpp
 *
 *  Created on: Feb 10, 2012
 *      Author: msirivia
 */

//============================================================================
// Name        : Vector.cpp
// Author      : Michael Sirivianos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "QueueFromStacks.h"
#include<stack>
#include<iostream>

using namespace std;

int main() {
//	THIS IS JUST TO SHOW YOU HOW #include <stack> WORKS
	stack<int> st1;
	stack<int> st2;
	cout << "Size before push:" << st2.size() << "\n";
	st2.push(2);
	st2.push(5);
	cout << "Size after two pushes:" << st2.size() << "\n";
	cout << st2.top() << "\n";
	st2.pop();
	cout << "Size of st2 after one pop:" << st2.size() << "\n";

	st1.push(st2.top());
	st2.pop();
	cout << "Size of st1:" <<st1.size()<< "   Size of st2:"<< st2.size()<<endl<<endl;



// You have to implement QueuefromStack
// The logic of the queue remains the same(FIFO) but you have to use the two stacks to store your elements
// In the main program create a queuefromstack object and use your implemented methods to clearly show us what u did

	QueueFromStacks<int>* qfs = new QueueFromStacks<int>;
	QueueEmptyException err;
	try{
	qfs->enqueue(5);
	qfs->enqueue(6);
	qfs->dequeue();
	}
	catch(QueueEmptyException&){
		cout<<err.getMessage()<<endl;
	}
	delete(qfs);

	QueueFromStacks<string>* qfs2 = new QueueFromStacks<string>;
	try{
	qfs2->enqueue("Hello");
	qfs2->enqueue("World");
	qfs2->dequeue();
	qfs2->dequeue();
	qfs2->dequeue();
	}
	catch(QueueEmptyException&){
		cout<<"Exception caught: "<<err.getMessage()<<endl;
	}
	delete(qfs2);

	system("pause");
	return 0;
}



