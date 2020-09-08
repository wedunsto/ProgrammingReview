#ifndef QueueClass_h
#define QueueClass_h
#include<iostream>
using namespace std;

/*
 *Objective:
 *	Create class for creation of Queues
 */

class Queue{
	public:
		int head, tail;//Create index variables to keep track of where the head and tail of the queue are
		int *arrayPointer;//Create a array of pointers to values in the queue
		int size;//Contain the size of the Queue
		
		Queue(){//Default constructor
			head=0;
			tail=0;
			this->size=0;
		}
		
		Queue(int size){//Overloaded constructor
			head=0;
			tail=0;
			this->size=size;
		}
		
		void enqueue(int value){//Add value to the tail of the queue
			arrayPointer[tail]=value;
			tail++;//Move the tail to the back of the queue
		}
		
		void printQueue(){
			int i=head;//Placeholder to traverse the queue
			while(1){
				cout<<arrayPointer[i]<<" ";//Print value in queue
				if(i==tail-1){//When the end of the queue is reached
					break;
				}
				i++;//Move to next value in a queue
			}
			cout<<endl;
		}
};
#endif