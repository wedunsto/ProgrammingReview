#ifndef LinkedListOperations_h
#define LinkedListOperations_h
#include<iostream>
#include "LinkedListClass.h"
using namespace std;
/*
 *Objective:
 *	Create linked list methods to:
 *		Create static linked list
 *		Print a linked list
 *		Reverse a linked list
 *		Delete a node in a linked list
 */
Node* staticLinkedList(){//Method to statically create a linked list
	Node* head=new Node(9);//Create linked list node and assign the value
	Node* n1=new Node(10);
	Node* n2=new Node(5);
	Node* n3=new Node(8);
	Node* n4=new Node(54);
	Node* n5=new Node(25);
	
	head->next=n1;//Point linked list node to next linked list node
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=NULL;//Create the tail of the linked list
	return head;//Return the head to traverse linked list
 }
 
void printLinkedList(Node* head){//Method to print out the values in the linked list
	if(head!=NULL){//Base case
		if(head->next==NULL){
			cout<<head->value;
		}
		else{
			cout<<head->value<<"->";//print out current node's value
			printLinkedList(head->next);//Traverse linked list
		}
	}
}

Node* reverseLinkedList(Node* head){//Method to reverse the order of a linked list
	if(head==NULL || head->next==NULL){//The current node and next node must not be NULL
		return head;
	}
	Node*past=head;
	Node* future=head->next;//Traverse linked list
	
	past->next=NULL;//Turn head to tail
	while(future!=NULL){
		Node* temp=future;//Clone current node
		future=future->next;//Move to next node
		temp->next=past;//Point current node back
		past=temp;//Move to next node
	}
	return past;//Return the past node because the next node is pointing to the previous node
}

Node* deleteNode(Node* head, int node){
	if(head==NULL || head->next==NULL){//Make sure linked list head and next element arent NULL
		return head;
	}
	Node* previousNode=head;//Clone linked list head
	for(int i=0;i<node-1;i++){//Traverse linked list until reached the node before deletion
		previousNode=previousNode->next;
	}
	Node* deleteNode=previousNode->next;
	previousNode->next = previousNode->next->next;//Points node before deleted node to next node
	deleteNode->next=NULL;
	free(deleteNode);
	return head;
}
#endif