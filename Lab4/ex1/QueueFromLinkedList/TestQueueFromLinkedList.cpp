/*
 * TestQueueFromLinkedList.cpp
 *
 *  Created on: Feb 11, 2012
 *      Author: msirivia
 */

#include"QueueFromLinkedList.h"
#include<iostream>
using namespace std;


int main() {

	/*Small program to test*/
	QueueFromLinkedList* qfll= new QueueFromLinkedList;
	QueueEmptyException err;

	try{
		qfll->enqueue("test1");
		qfll->enqueue("test2");
		qfll->enqueue("test3");
		qfll->dequeue();
		qfll->dequeue();
		qfll->dequeue();
		qfll->dequeue();
	}
	catch(QueueEmptyException&){
		cout<<"Exception caught: "<<err.getMessage()<<endl;
	}
	delete(qfll);

	system("pause");
	return 0;

}





