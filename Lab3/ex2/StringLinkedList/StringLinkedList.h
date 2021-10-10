/*
 * StringLinkedList.h
 *
 *  Created on: Jan 28, 2012
 *      Author: msirivia
 */

#ifndef STRINGLINKEDLIST_H_
#define STRINGLINKEDLIST_H_

#include <iostream>
#include <string>

using namespace std;

class StringLinkedList;

class StringNode {				// a node in a list of strings
	public:
    	string elem;				// element value
    	StringNode* next;				// next item in the list

    friend
    class StringLinkedList;		// provide StringLinkedList access
    friend class DerivedStringLinkedList;
};


class StringLinkedList {			// a linked list of strings
 	 public:
		StringLinkedList();				// empty list constructor
		virtual ~StringLinkedList(); 		// destructor

		bool empty() const;				// is list empty?
		const string& front() const;		// get front element
		void addFront(const string& e);		// add to front of list
		void removeFront();				// remove front item list
		StringNode* returnHead() const;  // get the head pointer of the list
		void printList() const;
		string at(int i) const;

		void setHead(StringNode* newHead);
		void setTailNext(StringNode* head2);

		StringNode* findTail() const;

		void overridingExample() const;
		virtual void polymorphismExample() const;

 	 protected:
		StringNode* head;				// pointer to the head of list
 };





class DerivedStringLinkedList: public StringLinkedList {
	public:
		DerivedStringLinkedList();				// empty list constructor
		virtual~ DerivedStringLinkedList();


		void overridingExample() const;
		virtual void polymorphismExample() const;
 };

#endif /* STRINGLINKEDLIST_H_ */
