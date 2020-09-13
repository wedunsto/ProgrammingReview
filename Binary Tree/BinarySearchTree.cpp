#include<iostream>
#include"BinarySearchTree.h"
using namespace std;

int main(){
	Node* root=new Node(10,new Node(8,new Node(5),new Node(9)),new Node(54,new Node(25),NULL));
	inOrder(root);
	if(isBST(root,NULL,NULL)){cout<<"\n"<<"This is a binary search tree"<<endl;}
	else{cout<<"\n"<<"This is not a binary search tree"<<endl;}
	cout<<"Inserting 30 into the binary search tree"<<endl;
	Node* expandedRoot=insert(root,30);
	inOrder(root);
	Node* deleted=deleteNode(root,10);
	cout<<endl;
	inOrder(root);
}