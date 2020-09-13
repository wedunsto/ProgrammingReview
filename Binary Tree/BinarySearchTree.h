#ifndef BinarySearchTree_h
#define BinarySearchTree_h
#include<iostream>
#include"BinaryTreeClass.h"
using namespace std;

void inOrder(Node* root){//Method to traverse binary search tree inOrder
	if(root==NULL){return;}//If the binary search tree is empty return
	inOrder(root->left);//Traverse the tree to the left
	cout<<root->value<<" ";//Print out the value
	inOrder(root->right);//Traverse the tree to the right
}

bool isBST(Node* root,Node* left=NULL, Node* right=NULL){//Method to confirm if a tree is a BST
	if(root==NULL){return true;}//If the tree is empty
	/*cout<<"root is: "<<root->value<<endl;
	if(left != NULL){cout<<"Left is: "<<left->value<<endl;}
	if(right != NULL){cout<<"right is: "<<right->value<<endl;}*/
	if((left!=NULL)and(root->value<=left->value)){return false;}//If the left child is greater than the parent
	if((right!=NULL)and(root->value>=right->value)){return false;}//If the right child is less than the parent
	return isBST(root->left,left,root)and isBST(root->right,root,right);
}

Node* insert(Node* root, int value){
	if(root==NULL){return new Node(value);}//If the binary search tree is empty, insert new value
	if(value==root->value){return root;}//If the value is the same as the root, do not add
	if(value>root->value){root->right=insert(root->right,value);}//If the value is greater than the root
	else{root->left=insert(root->left,value);}//If the value is less than the root
	return root;//Return pointer to the root of the binary search tree
}

Node* successor(Node* root){//Find the next root
	Node* traverse=root;//placeholder
	while(traverse!=NULL and traverse->right!=NULL){//While nodes arent NULL
		traverse=traverse->right;//traverse binary search tree
	}
	return traverse;//return the node desired
}

Node* deleteNode(Node* root, int value){
	if(root==NULL){return root;}//If binary search tree is empty
	if(value<root->value){root->left=deleteNode(root->left,value);}//If the value to delete is less than the root's values
	else if(value>root->value){root->right=deleteNode(root->right,value);}//If the value to delete is greater than the root's value
	else{//If the node with the value is found
		if(root->left==NULL){//If the left is NULL return the right
			Node* temp=root->right;
			free(root);
			return temp;
		}
		
		else if(root->right==NULL){//If the right is NULL return the left
			Node* temp=root->left;
			free(root);
			return temp;
		}
		
		Node* temp = successor(root->left);
		root->value=temp->value;
		root->left=deleteNode(root->left,temp->value);
	}
	return root;
}	

#endif