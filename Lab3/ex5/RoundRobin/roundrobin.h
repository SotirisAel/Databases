/*
 * roundrobin.h
 *
 *  Created on: Oct 10, 2021
 *      Author: Sotiris
 */

#ifndef ROUNDROBIN_H_
#define ROUNDROBIN_H_

#include<string>
#include<string.h>
using namespace std;

class RRNode{
	private:
		string elem; // linked list element value
		int duration;
		int rem_time;
		RRNode* next; // next item in the list
	friend class CircleList; // provide CircleList access
};

class CircleList { // a circularly linked list
		RRNode* cursor; // the cursor
		int time_slot=1;
		int total_time=0;
		int quantity=0;
	public:
		CircleList(); // constructor
		~CircleList(); // destructor
		bool empty() const; // is list empty?
		const string& front() const; // element at cursor
		const string& back() const; // element following cursor
		void advance(); // advance cursor
		void change_time(const int& time);
		void set_quantity(const int& value);
		const int& return_quantity() const;
		const int& return_time() const;
		void add(const string& name, const int& time); // add after cursor
		void remove(); // remove node after cursor
		void processing();
		bool firsttimerun=1;
		bool repeat=0;
		char running[8]="RUNNING";
		char terminated[11]="TERMINATED";


};

#endif /* ROUNDROBIN_H_ */
