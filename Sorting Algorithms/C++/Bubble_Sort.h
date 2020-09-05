#ifndef C___BUBBLE_SORT_
#define C___BUBBLE_SORT_H
#include<iostream>
using namespace std;
/*
 * Objective:
 * 	Sort values using bubble sort algorithm
 */

void bubbleSort(int arr[], int size){//Method to sort values using bubble sort
	for(int i=0;i<size;i++){//Determine which phase is active
		for(int j=0;j<size-i-1;j++){//Progressively truncate range
			if(arr[j]>arr[j+1]){//If out of order swap
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
#endif //C___BUBBLE_SORT_H
