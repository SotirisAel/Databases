/*
 * NodeSequence.h
 *
 *  Created on: Feb 23, 2012
 *      Author: msirivia
 */

#ifndef NODESEQUENCE_H_
#define NODESEQUENCE_H_

#include "NodeList.h"

class NodeSequence : public NodeList {
  public:
    Iterator atIndex(int i) const;		// get position from index
    int indexOf(const Iterator& p) const;	// get index from position
    void selectionSort();
    //void erase(const Iterator& p, const Iterator q);
};


#endif /* NODESEQUENCE_H_ */
