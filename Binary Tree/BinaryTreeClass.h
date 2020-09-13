#ifndef BinaryTree_h
#define BinaryTree_h
#include<iostream>
#include<math.h>
using namespace std;
/*
 *Objective:
 *	Create the Node class for the binary tree
 *	Build binary tree
 */
class Node{
	public:
		int value;//Holds the node value
		Node* left;//Pointer to the left child
		Node* right;//Pointer to the right child
		
		Node(){//Default constructor
			value=0;
			left=NULL;
			right=NULL;
		}
		
		Node(int value, Node* left, Node* right){//Overloaded constructor
			this->value=value;
			this->left=left;
			this->right=right;
		}
		
		Node(int value){//Overloaded constructor
			this->value=value;
			this->left=NULL;
			this->right=NULL;
		}
};

int height(Node* root){//Method to determine the height of a binary tree
	if(root==NULL){return 0;}//Empty trees have a height of 0
	//If the left height is greater
	if(height(root->left) > height(root->right)){return height(root->left)+1;}
	//If the right height is greater
	else{return height(root->right)+1;}
}

int countOfNodes(Node* root){//Method to determine the number of nodes in the binary tree
	if(root==NULL){return 0;}//Empty trees have 0 nodes
	int leftNodes=countOfNodes(root->left);//Sums up the number of nodes on the left
	int rightNodes=countOfNodes(root->right);//Sums up the number of nodes on the right
	return leftNodes+rightNodes+1;
}

int maxNodesOnLevel(int level){//Method to determine the max number of nodes on a level
	return pow(2,level);//2^(level)
}

int maxNodesInTree(int height){//Method to determine the max number of nodes in the tree
	return pow(2,height)-1;//[2^(height)+1]-1
}

int numberOfEdges(int nodeCount){//Method to determine the number of edges in a binary tree
	return nodeCount-1;
}

int minHeight(int nodeCount){//Method to determine the minimum height of the binary tree
	return ceil(log2(nodeCount+1));
}

int maxHeight(int nodeCount){//Method to determin the maximum height of the binary tree
	return nodeCount;
}
#endif