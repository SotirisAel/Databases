/*
 * main.cpp
 *
 *  Created on: Sep 23, 2021
 *      Author: Sotiris
 */

#include <iostream>
#include <vector>
#include "addition.h"

using namespace std;

int main(){

	int a;
	addition add;
	cout<<"Enter number: ";
	cin>>a;
	cout<<"Total: "<<add.add(a)<<endl;
	system("pause");
	return 0;
}


