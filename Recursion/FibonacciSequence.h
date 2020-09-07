#ifndef FibonnaciSequence_h
#define FibonnaciSequence_h
#include<iostream>
using namespace std;
/*
 *Objective:
 *	Calculate fibonnaci sequence with and without recursion
 */
 int iterativeFibonacciSequence(int n){//Create method for fibonnaci sequence without recursion
   int SIZE=n+1;//create size constant for the fibonnaci array 
	 int fibonacci[SIZE];//Create array to store previous fibonacci values
	 for(int i=0;i<SIZE;i++){
		 if(i<2){fibonacci[i]=i;}//Store static fibonacci values
		 else{fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];}//Store calculated fibonacci values
	 }
	 return fibonacci[SIZE-1];
 }
 
 int recursiveFibonacciSequence(int n){
	 if(n<2){return n;}//Return static fibonacci values
	 return recursiveFibonacciSequence(n-1)+recursiveFibonacciSequence(n-2);//f(n)=f(n-1)+f(n-2)
 }
#endif