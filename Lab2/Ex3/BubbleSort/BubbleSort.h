/*
 * BubbleSort.h
 *
 *  Created on: Sep 23, 2021
 *      Author: Sotiris
 */

#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_

#include<vector>

using namespace std;

class BubbleSort{
	public:
		void bubbleSort(vector<int> &vect, int i);
		void swap(int *a, int *b);
};



#endif /* BUBBLESORT_H_ */
