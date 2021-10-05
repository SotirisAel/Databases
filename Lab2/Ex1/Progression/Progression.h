/*
 * Progression.h
 *
 *  Created on: Sep 28, 2021
 *      Author: Sotiris
 */

#ifndef PROGRESSION_H_
#define PROGRESSION_H_

/*Base Progression class*/
class Progression {
	public:
		Progression(){ }; 							// Constructor
		virtual void printProgression(int n) = 0;	// Virtual function so pointer can choose on runtime, =0 to prevent vtable errors
		virtual ~Progression(){};					// Virtual destructor
};

/*Child classes*/

/*Arithmetic progression class*/
class ArithProgression: public Progression {
	public:
		ArithProgression(int a = 1); 				// Initial constructor
		void printProgression(int n);
	protected:
		int cur=0;	//first term is 0
		int add;

};

/*Geometric progression class*/
class GeomProgression: public Progression {
	public:
		GeomProgression(int b = 2); 				// Initial constructor
		void printProgression(int n);
	protected:
		int base;
		int cur=1;	//first term is 1

};

/*Fibonacci progression class*/
class FibonacciProgression: public Progression {
	public:
		FibonacciProgression(int p = 0, int c = 1); // Initial constructor
		void printProgression(int n);
	protected:
		int prev;
		int cur;

};

#endif /* PROGRESSION_H_ */
