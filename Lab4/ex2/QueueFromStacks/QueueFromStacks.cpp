/*
 * QueueFromStacks.cpp
 *
 *  Created on: Feb 10, 2012
 *      Author: msirivia
 */

#include"QueueFromStacks.h"
#include<iostream>
#include<stack>
#include<string>
using namespace std;

template <typename E>
QueueFromStacks<E>::QueueFromStacks() {
	numElements=0;
}

template <typename E>
QueueFromStacks<E>::~QueueFromStacks() {}

template <typename E>
int QueueFromStacks<E>::size() const {
	return numElements;
}

template <typename E>
bool  QueueFromStacks<E>::empty() const {
	return (size() == 0);
}

template <typename E>
const E& QueueFromStacks<E>::front() const
	throw(QueueEmptyException) {
	if (empty())
		throw QueueEmptyException();
	return st2.top();  // don't forget to check for empty and throw exception if it is empty.
}

template <typename E>
void QueueFromStacks<E>::enqueue (const E& e) {

	//Push all items from s2 into s1
	 while (!st2.empty()) {
		 st1.push(st2.top());
		 st2.pop();
	 }
	 // Push item into s1
	 st1.push(e);

	 // Push everything back to s2
	 while (!st1.empty()) {
		 st2.push(st1.top());
		 st1.pop();
	 }
	 cout<<"Item added: "<<e<<endl;
	 numElements++;
}

template <typename E>
void QueueFromStacks<E>::dequeue()
			throw(QueueEmptyException){
	if (st2.empty())
		throw QueueEmptyException();

	cout<<"Item dequeued: "<<st2.top()<<endl;
	st2.pop();
	numElements--;
}

QueueEmptyException::QueueEmptyException(){
	getMessage();
}

QueueEmptyException::~QueueEmptyException(){}

template class QueueFromStacks<int>;
template class QueueFromStacks<float>;
template class QueueFromStacks<string>;
