#ifndef StackClass_h
#define StackClass_h
#include<iostream>
#include<vector>
using namespace std;

class stack{
	public:
		vector<char>s;//Create vector implementation of stack
		int top;//Keeps track of vector index in the stack
		
		stack(){//Default constructor
			top=-1;//Set the top of the stack 1 behind the beginning
		}
		
		void push(char value){//Method to push a value onto the stack
			s.push_back(value);//Adds a value to the top of the stack
			top=s.size()-1;//Moves the tracker to the top of the stack
		}
		
		void pop(){
			if(empty()){//If the stack is empty
				cout<<"The stack is empty"<<endl;
				return;
			}
			s.pop_back();//remove the top value from the stack
			top--;//Moves the tracker to the top of the stack
		}
		
		bool empty(){//Method to confirm if the stack is empty
			return top==-1;
		}
		
		char topValue(){//Method to view the top of the stack
			return s.at(top);
		}
		
		int size(){//Method to return how many values are on the stack
			return top+1;
		}
		
		void printStack(){//Method to print out all the values on the stack
			for(int i=top;i>=0;i--){//Ensures the order of the stack is kept
				cout<<s.at(i)<<" ";
			}
			cout<<endl;
		}
		
		bool verifySymetry(char input[], int size){
			if(size %2 != 0){return false;}
			bool result=true;//variable that will return if the input char array is symetric or not
			int index=0;//Index iterator for the symetry input
			//Ensure that closing containers are not on the stack
			while((input[index] != ']' && input[index] != '}' && input[index] != ')') && index<size){
				push(input[index]);//Pushing opening containers onto the stack
				index++;//increment the index iterator
			}	
			while(index<size&&!(empty())){//traverse the rest of the input character array
				switch(input[index]){
					case(')'):
						if(topValue()!='('){
							cout<<input[index]<<"\n"<<topValue()<<endl;
							return false;
						}
						pop();
						index++;
						break;
				  case('}'):
						if(topValue()!='{'){
							cout<<input[index]<<"\n"<<topValue()<<endl;
							return false;
						}
						pop();
						index++;
						break;
					case(']'):
						if(topValue()!='['){
							cout<<input[index]<<"\n"<<topValue()<<endl;
							return false;
						}
						pop();
						index++;
						break;
				}
			}
			return true;
		}
};

#endif