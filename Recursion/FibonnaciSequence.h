#ifndef FibonnaciSequence.h
#define FibonnaciSequence.h
#include<iostream>
using namespace std;
/*
 *Objective:
 *	Calculate fibonnaci sequence with and without recursion
 */
 int fibonnaciSequence(int n){//Create method for fibonnaci sequence without recursion
   int SIZE=n+1;//create size constant for the fibonnaci array 
	 int fibonnaci[SIZE];//Create array to store previous fibonacci values
	 for(int i=0;i<SIZE;i++){
		 if(i<2){fibonacci[i]=i;}//Store static fibonacci values
		 else{fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];}//Store calculated fibonacci values
	 }
	 return fibonacci[SIZE-1];
 }
#endif