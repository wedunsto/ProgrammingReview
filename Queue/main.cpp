#include<iostream>
#include "QueueClass.h"
using namespace std;

/*
 *Objective:
 *	Demonstrate array of pointers implementation of a Queue
 */
 
 int main(){
	 int SIZE=6;
	 Queue queue(SIZE);
	 queue.enqueue(9);//Populate queue
	 queue.enqueue(10);
	 queue.enqueue(5);
	 queue.enqueue(8);
	 queue.enqueue(54);
	 queue.enqueue(25);
	 
	 queue.printQueue();
 }