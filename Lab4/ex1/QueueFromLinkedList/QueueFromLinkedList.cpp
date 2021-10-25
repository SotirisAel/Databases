/*
 * QueueFromLinkedList.cpp
 *
 *  Created on: Feb 11, 2012
 *      Author: msirivia
 */

#include "QueueFromLinkedList.h"
#include<iostream>
#include<string>
using namespace std;

QueueFromLinkedList::QueueFromLinkedList() {
	numElements=0;
	head = tail = NULL;
}

QueueFromLinkedList::~QueueFromLinkedList(){
	head = tail = NULL;
}

int QueueFromLinkedList::size() const {
	return numElements;
}

bool QueueFromLinkedList::empty() const {
	return (size() == 0);
}

const string& QueueFromLinkedList::front() const
	throw(QueueEmptyException) {
	if (empty())
		throw QueueEmptyException();
	return head->elem;  // don't forget to check for empty and throw exception if it is empty.
}

void QueueFromLinkedList::enqueue (const string& e) {

    StringNode* temp = new StringNode;	//Create the new node
    temp->elem=e;						//assign value

    //Check if its the first node
    if (head == NULL) {
        head = tail = temp;
    }
    //Else change the head to the new node
    else{
    	head->next = temp;
    	head = temp;
    }
    cout<<"New node added: "<<temp->elem<<endl;
	numElements++;
}

void QueueFromLinkedList::dequeue()
	throw(QueueEmptyException){
		if (empty())						//If queue is empty, throw exception
			throw QueueEmptyException();
	else{
		StringNode* temp = tail;	//Create a pointer to the tail
		tail = tail->next;			//Change the tail to the next
		if (head == NULL)			//If head is null then tail is also null
			tail = NULL;

		//Print what was deleted, delete it, and remove 1 from numElments
		cout<<"Node deleted: "<<temp->elem<<endl;
		delete (temp);
		numElements--;
	}
}

QueueEmptyException::QueueEmptyException(){
	getMessage();
}
