#ifndef Factorial_h
#define Factorial_h
#include<iostream>
using namespace std;
/*
 *Objective:
 *	Calculate factorial value both iteratively and recursively
 */
 int iterativeFactorial(int n){
	 int fact[n];//Create array to store previous factorial values
	 for(int i=1;i<n+1;i++){
		 if(i<2){fact[i-1]=i;}//Store static factorial value
		 else{fact[i-1]=i*fact[i-2];}//Store calculate factorial results
	 }
	 return fact[n-1];//Return calculated factorial result
 }
 
 int recursiveFactorial(int n){
	 if(n<2){return n;}//Base case, return 1
	 return n*recursiveFactorial(n-1);//recursive calls to return factorial value
 }
#endif