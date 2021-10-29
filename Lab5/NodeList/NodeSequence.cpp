/*
 * NodeSequence.cpp
 *
 *  Created on: Feb 23, 2012
 *      Author: msirivia
 */
#include "NodeSequence.h"
						// get position from index
NodeSequence::Iterator NodeSequence::atIndex(int i) const {
    Iterator p = begin();
    for (int j = 0; j < i; j++) ++p;
    return p;
}
  						// get index from position
int NodeSequence::indexOf(const Iterator& p) const {
    Iterator q = begin();
    int j = 0;
    while (q != p) {				// until finding p
      ++q; ++j;					// advance and count hops
    }
    return j;
}

void NodeSequence::selectionSort(){

	//Get first element
    auto temp = begin();

    cout<<"Value: "<<*temp<<endl;
    // Traverse the List
    while (temp!=end()) {
    	auto min = temp;		//Assign first as minimum
    	auto i = ++temp;	//Assign i to next
    	cout<<"Asd2"<<endl;
        // Traverse the unsorted sublist
        while (i!=end()) {
            if (*min > *i)	//If i is smaller
                min = i;				//make it the new min

            ++i;
        }
        cout<<"Min elem: "<<*min<<endl;
        // Check if our item isn't the smallest
        if(*temp!=*min){
        	//Swap Data
        	auto x = *temp;			//temp x
        	*temp = *min;		//Swap item with minimum found
        	*min = x;
        }
        ++temp;			//move to next item
    }
}

/*void NodeSequence::erase(const Iterator& p, const Iterator q){

	erase(p);
}*/
