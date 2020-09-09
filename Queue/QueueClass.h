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
		
		Queue(int size){//Overloaded constructor
			head=-1;
			tail=-1;
			this->size=size;
			arrayPointer=new int[size];
		}
		
		bool fullQueue(){//Method to determine if the queue is full
			if((head==0&&tail==size-1)||(tail==head-1)){return true;}
			else{return false;}
		}
		
		bool emptyQueue(){//Method to determine if the queue is empty
			if(head==-1){return true;}
			else{return false;}
		}
		
		int sizeOfQueue(){
			cout<<"Queue capacity is: "<<size<<endl;
			int counter=0;//Store the count of elements in the queue
			int i=head;//Iterator for the queue
			while(1){
				counter++;
				if(i==tail){//When the end of the queue is reached
					break;
				}
				i=(i+1)%size;//Increment the iterator in a circle fashion
			}
			return counter;
		}
		
		void enqueue(int value){//Add value to the tail of the queue
			if(emptyQueue()){//If the queue is empty
				head=0;
				tail=0;
				arrayPointer[tail]=value;
			}
			else if(fullQueue()){//If the queue is full
				int *newArrayPointer=new int[size*2];//Create a new array of pointers with double the size
				int i=0;//Iterator for the new array of pointers
				while(1){
					newArrayPointer[i]=arrayPointer[head];//Copy values in current array of points to new array of pointers
					i++;//Move to next index in the new array of pointers
					if(head==tail){//When the end of the queue is reached
						break;
					}
					head=(head+1)%size;//Traverse circular queue
				}
				delete[] arrayPointer;//Delete the original array of pointers from memory
				head=0;//Redefine head
				tail=i;//Redefine tail
				size=size*2;//Double to size of the queue
				arrayPointer=newArrayPointer;//Store new array in class array
				arrayPointer[tail]=value;//Store new value at the end of the queue
			}
			else{//If queue is neither empty nor full
				tail=(tail+1)%size;
				arrayPointer[tail]=value;				
			}
		}
		
		void dequeue(){//Method to dequeue the value at the front of the queue
			if(emptyQueue()){//If the queue is empty
				cout<<"Queue is empty"<<endl;
				return;
			}
			if(head==tail){
				head=tail=-1;
			}
			head=(head+1)%size;
		}
		
		void printQueue(){
			int i=head;//Placeholder to traverse the queue
			while(1){
				cout<<arrayPointer[i]<<" ";//Print value in queue
				if(i==tail){//When the end of the queue is reached
					break;
				}
				i=(i+1)%size;//Move to next value in a queue
			}
			cout<<endl;
		}
};
#endif