/*
 * stacks.h
 *
 *  Created on: Oct 23, 2021
 *      Author: Sotiris
 */

#ifndef STACKS_H_
#define STACKS_H_

#include<stack>
#include<string>
using namespace std;

template <typename E>
class stacks{
	public:
		stacks();
		~stacks();
		void clearstack();
		stack<E> mystack;
};


#endif /* STACKS_H_ */
