/*
 * BubbleSort.cpp
 *
 *  Created on: Sep 23, 2021
 *      Author: Sotiris
 */

#include <vector>
#include "BubbleSort.h"

using namespace std;

void BubbleSort::bubbleSort(vector<int> &vect,int i)
{
	/*Function Declerations*/
	unsigned int j;
	bool swapped=false;

	/*Bubble Sorting algorithm*/
    for (j = 0; j < vect.size()-i-1; j++)
    	if (vect[j] > vect[j+1]){
    		swap(&vect[j], &vect[j+1]);		//Call swap function
    		swapped=true;
    	}

    if(swapped){
    	i++;
    	bubbleSort(vect,i);					//Recursion call
    }
}


//Swapping Function
void BubbleSort::swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
