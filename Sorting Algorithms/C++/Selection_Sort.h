#ifndef C___SELECTION_SORT_H
#define C___SELECTION_SORT_H
#include<iostream>
using namespace std;
/*
 * Objective:
 *  Create a class capable of performing the selection sort algorithm
 */
void printArray(int arr[], int n){//Print out the array
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void selectionSort(int arr[], int n){//Perform selection sort on the array
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]>arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
}
#endif //C___SELECTION_SORT_H
