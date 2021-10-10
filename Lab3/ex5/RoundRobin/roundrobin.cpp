/*
 * roundrobin.cpp
 *
 *  Created on: Oct 10, 2021
 *      Author: Sotiris
 */

#include<iostream>
#include<string>
#include"roundrobin.h"
using namespace std;

CircleList::CircleList(): cursor(NULL) { } // constructor


CircleList::~CircleList() { while (!empty()) remove(); } // destructor


bool CircleList::empty() const { return cursor == NULL; }// is list empty?

const string& CircleList::back() const { return cursor->elem; }// element at cursor

const string& CircleList::front() const { return cursor->next->elem; }// element following cursor

void CircleList::advance() { cursor = cursor->next; }// advance cursor

void CircleList::change_time(const int& time){
	time_slot=time;
}

void CircleList::set_quantity(const int& value){
	quantity=value;
}

const int& CircleList::return_quantity() const {return quantity;}

const int& CircleList::return_time() const {return cursor->rem_time;}


void CircleList::add(const string& name, const int& time) { // add after cursor
	RRNode* v = new RRNode; // create a new node
	v->elem = name;	//copy process ID
	v->duration= time; //copy process runtime
	v->rem_time=v->duration; //copy remaining time from runtime
	if (cursor == NULL) { // list is empty?
		v->next = v; // v points to itself
		cursor = v; // cursor points to v
	}
	else { // list is nonempty?
		v->next = cursor->next; // link in v after cursor
		cursor->next = v;
	}
}

void CircleList::remove() { // remove node after cursor
	RRNode* old = cursor->next; // the node being removed
	int waiting_time;
	waiting_time=total_time-(old->duration);	//calculate total time of process
	cout<<old->elem;printf("%30d%27s%12d\n", 0, terminated, waiting_time);	//say which process was terminated
	if (old == cursor){ // if its the last process
		cursor = NULL; // list is now empty
		cout<<"\nAll processes have finished! Total run-time: "<<total_time<<"\n\n";	//Print end of program and terminate program
		system("pause");
		exit(0);
	}
	else
		cursor->next = old->next; // link out the old node
	delete old; 				  // delete the old node
}

void CircleList::processing(){

	/*Calculations for first time*/
	if(firsttimerun){
		/*Check if first Process is bigger than time quantum*/
		if(cursor->rem_time>time_slot){
			cursor->rem_time-=time_slot;
			total_time+=time_slot;
			firsttimerun=0;
			cout<<cursor->elem;
			printf("%30d%24s\n",cursor->rem_time,running);
		}
		/*Else loop to last node to delete next*/
		else{
			for(int k=0;k<return_quantity()-2;k++)
				advance();
			repeat=1;
			while(repeat){
				total_time+=cursor->next->rem_time;
				remove();
				/*Check if next is also smaller than quantum, if so repeat*/
				if(cursor->next->rem_time<=time_slot)
					repeat=1;
				else
					repeat=0;
			}
		}
	}
	/*Check if next Process is bigger than time quantum*/
	if(cursor->next->rem_time<=time_slot){
		repeat=1;
		while(repeat){
			total_time+=cursor->next->rem_time;
			remove();
			/*Check if next is also smaller than quantum, if so repeat, else exit loop*/
			if(cursor->next->rem_time<=time_slot)
				repeat=1;
			else
				repeat=0;
		}
	}
	/*Else, calculate normally*/
	else {
		cursor->next->rem_time-=time_slot;
		total_time+=time_slot;
		cout<<cursor->next->elem;			//print next process id
		printf("%30d%24s\n",cursor->next->rem_time,running);	//print next process time remaining, and state

	}
}
