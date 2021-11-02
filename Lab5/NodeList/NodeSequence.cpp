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
    Iterator temp = begin();
    while (temp!=(--end())) {

    	//Initialize iterators
    	Iterator min = temp;
    	Iterator i = temp;
    	++i;

    	//Search loop
        while (i!=end()) {
            if (*min > *i)
                min = i;
            ++i;
        }

        //Value replacement
        if(*temp!=*min){	//To prevent unnecessary changes if item is same
        	int x = *temp;
        	*temp = *min;
        	*min = x;
        }
        ++temp;				//advance iterator
    }
}

void NodeSequence::nserase(const Iterator& p, const Iterator q){
	Iterator temp= p;
	while(temp!=q){
		erase(temp);
		++temp;
	}


}

