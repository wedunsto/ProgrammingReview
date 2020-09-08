#ifndef LinkedListClass_h
#define LinkedListClass_h
#include<iostream>
using namespace std;
/*
 *Objective:
 *	Create a class to create linked list nodes
 */
 class Node{
	 public:
		int value;//Value contained in the linked list node
		Node* next;//Pointer to the next node in the linked list
		Node(){//Default constructor
			this->value=0;
		}
		Node(int value){//Overloaded constructor
			this->value=value;
		}
		Node(int value, Node* next){//Overloaded constructor
			this->value=value;
			this->next=next;
		}
 };
#endif