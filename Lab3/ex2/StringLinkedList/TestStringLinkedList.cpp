/*
 * TestStringLinkedList.cpp
 *
 *  Created on: Jan 28, 2012
 *      Author: msirivia
 */

#include "StringLinkedList.h"


using namespace std;


int main() {
/*
	StringLinkedList sll;				// list of strings
	DerivedStringLinkedList dsll;

	StringLinkedList* psll, *pdsll;

	sll.addFront("Real");
	sll.addFront("Valencia");

	sll.printList();

	cout <<  "\n\n";

	sll.removeFront();
	sll.printList();

	cout << sll.at(0) << "\n";
	sll.addFront("Madrid");
	sll.printList();
	cout << "\n" << sll.at(0) << "\n" << sll.at(1) << "\n";

	cout << "Overriding:\n";
	sll.overridingExample();
	dsll.overridingExample();


	cout << "Polymorphism:\n";
	psll = &sll;

	pdsll = &dsll;

	psll->polymorphismExample();
	pdsll->polymorphismExample();
	pdsll->overridingExample();

	delete psll;
	delete pdsll;
*/

	StringLinkedList *sll1, *sll2,*new_sll;

	sll1 = new StringLinkedList();
	sll2 = new StringLinkedList();

	sll1->addFront("Node 1, List 1");
	sll1->addFront("Node 2, List 1");
	sll1->addFront("Node 3, List 1");
	sll1->addFront("Node 4, List 1");

	sll1->printList();

	sll2->addFront("Node 1, List 2");
	sll2->addFront("Node 2, List 2");
	sll2->addFront("Node 3, List 2");
	sll2->addFront("Node 4, List 2");

	sll2->printList();

	// This is the new list that will contain both sll1 and sll2
	new_sll = new StringLinkedList();

	new_sll->setHead(sll1->returnHead());
	new_sll->setTailNext(sll2->returnHead());

	// Use the next code to test whether you did it right.
	new_sll->printList();

	sll1->printList();
	system("pause");
	return 0;

}



