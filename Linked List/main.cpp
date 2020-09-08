#include<iostream>
#include "LinkedListOperations.h"
using namespace std;

int main(){
	Node* head=staticLinkedList();
	cout<<"Linked List is: "<<endl;
	printLinkedList(head);
	Node* reversed=reverseLinkedList(head);
	cout<<"\n"<<"Reversed linked list is: "<<endl;
	printLinkedList(reversed);
	cout<<"\n"<<"Removing the 3rd linked list element: "<<endl;
	Node* reducedLinkedList=deleteNode(reversed,3);
	printLinkedList(reducedLinkedList);
	return 0;
}