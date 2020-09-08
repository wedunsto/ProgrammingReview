#ifndef Quick_Sort_h
#define Quick_Sort_h
#include<iostream>
using namespace std;
/*
 *Objective:
 *	Sort array using quick sort
 */
 int partition(int arr[], int low, int high){
	 //Places array elements less than the pivot to the left of the pivot
	 //Places array elements greater than the pivot to the right of the pivot
	 //Returns the index element where the pivot is correctly placed
	 
	 int pivot=arr[high];//Select last element as pivot
	 int i=low-1;//Initialize left index lower than starting index
	 
	 //Initialize right index as low
	 for(int j=low;j<high;j++){
		 if(arr[j]<pivot){//Swap elements lower than pivot left
			 i++;//move left to the right
			 int temp=arr[j];
			 arr[j]=arr[i];
			 arr[i]=temp;
		 }
	 }
	 int temp=arr[i+1];
	 arr[i+1]=pivot;//Swap elements greater than pivot right
	 arr[high]=temp;
	 return i+1;//Return index where pivot is
 }
 
 void quickSort(int arr[], int low, int high){
	 if(low<high){
		 int partitionIndex=partition(arr,low,high);//Identify array index where pivot is placed
		 quickSort(arr,low,partitionIndex-1);//Perform quick sort on elements lower than the pivot
		 quickSort(arr,partitionIndex+1,high);//Perform quick sort on elements greater than the pivot
	 }
 }
#endif