#include<iostream>
#include "FibonacciSequence.h"
#include "Factorial.h"
using namespace std;

int main(){
	cout<<"Iteratively calculating fibonacci sequence of 4 is: "<<iterativeFibonacciSequence(4)<<endl;
	cout<<"Recursively calculating fibonacci sequence of 4 is: "<<recursiveFibonacciSequence(4)<<endl;
	cout<<"Iteratively calculating factorial of 4 is: "<<iterativeFactorial(4)<<endl;
	cout<<"Recursively calculating factorial of 4 is: "<<recursiveFactorial(4)<<endl;
	return 0;
}