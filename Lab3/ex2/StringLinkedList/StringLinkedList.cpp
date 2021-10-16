/*
 * StringLinkedList.cpp
 *
 *  Created on: Jan 28, 2012
 *      Author: msirivia
 */
#include "StringLinkedList.h"

void StringLinkedList::setHead(StringNode* newHead) {
	head = newHead;
}

void StringLinkedList::setTailNext(StringNode* head2) {
	StringNode* tail = findTail();
		tail->next=head2;
}


StringNode* StringLinkedList::findTail() const {
	// go through the list until node.next == NULL
	StringNode* tail = head;
	while(tail->next!=NULL)
		tail=tail->next;
	return tail;

}


StringLinkedList::StringLinkedList()			// constructor
	: head(NULL) { }

StringLinkedList::~StringLinkedList()			// destructor
	{ while (!empty()) removeFront(); }

bool StringLinkedList::empty() const			// is list empty?
	{ return head == NULL; }

const string& StringLinkedList::front() const		// get front element
	{ return head->elem; }


void StringLinkedList::addFront(const string& e) {	// add to front of list
	StringNode* v = new StringNode;			// create new node
	v->elem = e;					// store data
	v->next = head;					// head now follows v
	head = v;
	// v is now the head
}

void StringLinkedList::removeFront() {		// remove front item
	StringNode* old = head;				// save current head
	head = old->next;					// skip over old head
	delete old;						// delete the old head
}

StringNode* StringLinkedList::returnHead() const		// return head
	{ return head; }

void StringLinkedList::printList() const {
	StringNode* cursor;

	cursor = head;

	for(; cursor!=NULL; cursor=cursor->next ) {
		cout << cursor->elem << "\n";
	}

	cout << "\n";
}

string StringLinkedList::at(int i) const  {
	StringNode* cursor;
	int j;

	cursor = head;


	for(j=0; j < i && cursor!=NULL; cursor=cursor->next ) {
		j++;
	}

	return cursor->elem;
}

void StringLinkedList::overridingExample() const {
	cout << "I am a member of StringLinkedList\n";
}

void StringLinkedList::polymorphismExample() const {
	cout << "I am a member of StringLinkedList\n";
}

DerivedStringLinkedList::DerivedStringLinkedList()	{		// constructor
	head = NULL;
}

DerivedStringLinkedList::~DerivedStringLinkedList()			// destructor
	{ while (!empty()) removeFront(); }

void DerivedStringLinkedList::overridingExample() const {
	cout << "I am a member of DerivedStringLinkedList\n";
}

void DerivedStringLinkedList::polymorphismExample() const {
	cout << "I am a member of DerivedStringLinkedList\n";
}
