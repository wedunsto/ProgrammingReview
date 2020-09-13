#include<iostream>
#include"BinaryTreeClass.h"
using namespace std;

int main(){
	//Build the full binary tree
	Node* root=new Node(9);
	Node* n1=new Node(10);
	Node* n2=new Node(5);
	Node* n3=new Node(8);
	Node* n4=new Node(54);
	Node* n5=new Node(25);
	Node* n6=new Node(30);
	
	root->left=n1;
	root->right=n2;
	n1->left=n3;
	n1->right=n4;
	n2->left=n5;
	n2->right=n6;
	
	cout<<"The binary tree height is: "<<height(root)<<endl;
	cout<<"The number of nodes in the binary tree is: "<<countOfNodes(root)<<endl;
	
	int perfectTreeHeight=height(root);
	int perfectTreeNodeCount=countOfNodes(root);
	
	cout<<"The max number of nodes on level 2 is: "<<maxNodesOnLevel(2)<<endl;
	cout<<"The max number of nodes in the binary tree is: "<<maxNodesInTree(perfectTreeHeight)<<endl;
	cout<<"The number of edges in the binary tree is: "<<numberOfEdges(perfectTreeNodeCount)<<endl;
	cout<<"The minimum height of the binary tree is: "<<minHeight(perfectTreeNodeCount)<<endl;
}