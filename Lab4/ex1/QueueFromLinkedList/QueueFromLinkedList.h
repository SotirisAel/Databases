/*
 * QueueLinkedList.h
 *
 *  Created on: Feb 11, 2012
 *      Author: msirivia
 */

#ifndef QUEUELINKEDLIST_H_
#define QUEUELINKEDLIST_H_

#include <iostream>
#include <string>

using namespace std;

class QueueFromLinkedList;


class StringNode {				// a node in a list of strings
	public:
    	string elem;				// element value
    	StringNode* next;				// next item in the list

    friend class QueueFromLinkedList;		// provide QueueLinkedList access
};

class QueueEmptyException{
	public:
		QueueEmptyException();
		//~QueueEmptyException(); Not needed, gives errors

		string getMessage() {
			return "Queue is empty";
		}

};

class QueueFromLinkedList {
public:
	QueueFromLinkedList();
	~QueueFromLinkedList();

	int size() const;
	bool empty() const;
	const string& front() const
		throw(QueueEmptyException);
	void enqueue (const string& e);
	void dequeue()
			throw(QueueEmptyException);
private:
	int numElements;
	StringNode *head, *tail;
};


#endif /* QUEUELINKEDLIST_H_ */
