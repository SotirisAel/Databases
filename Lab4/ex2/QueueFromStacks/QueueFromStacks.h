/*
 * QueueFromStacks.h
 *
 *  Created on: Feb 10, 2012
 *      Author: msirivia
 */

#ifndef QUEUEFROMSTACKS_H_
#define QUEUEFROMSTACKS_H_

#include <iostream>
#include <stack>
#include <string>

using namespace std;


class QueueEmptyException;

template <typename E>
class QueueFromStacks {
public:
	QueueFromStacks();
	~QueueFromStacks();

	int size() const;
	bool empty() const;
	const E& front() const
		throw(QueueEmptyException);
	void enqueue (const E& e);
	void dequeue()
			throw(QueueEmptyException);
private:
	stack<E> st1;
	stack<E> st2;
	int numElements;
};

class QueueEmptyException{
	public:
		QueueEmptyException();
		~QueueEmptyException();

		string getMessage() {
			return "Queue is empty";
		}

};

#endif /* QUEUEFROMSTACKS_H_ */

