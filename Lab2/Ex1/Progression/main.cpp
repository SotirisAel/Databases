/*
 * main.cpp
 *
 *  Created on: Sep 21, 2021
 *      Author: Sotiris
 */

/** Test program for the progression classes */

#include<iostream>
#include"Progression.h"

using namespace std;

int main() {
 Progression* prog;

// test ArithProgression
 cout << "Arithmetic progression with default increment 1:\n";
 prog = new ArithProgression();// prints the first 10 terms

// from 1 to 10
 prog->printProgression(10);
 cout << "Arithmetic progression with increment 5:\n";
 prog = new ArithProgression(5);
 prog->printProgression(10);


// test GeomProgression
 cout << "Geometric progression with default base:\n";
 prog = new GeomProgression();
 prog->printProgression(10);
 cout << "Geometric progression with base 3:\n";
 prog = new GeomProgression(3);
 prog->printProgression(10);

// test FibonacciProgression
 cout << "Fibonacci progression with default start values:\n";
 prog = new FibonacciProgression();
 prog->printProgression(10);
 cout << "Fibonacci progression with start values 4 and 6:\n";
 prog = new FibonacciProgression(4, 6);
 prog->printProgression(10);


 system("pause");
 return 0; // successful execution
}


