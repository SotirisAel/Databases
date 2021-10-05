/*
 * addition.cpp
 *
 *  Created on: Sep 23, 2021
 *      Author: Sotiris
 */

#include <iostream>
#include <vector>
#include "addition.h"

using namespace std;

int addition::add(int a){
	if(a==1)
		return 1;
	return a+add(a-1);
}

