#ifndef C___INSERTION_SORT_H
#define C___INSERTION_SORT_H
#include<iostream>
using namespace std;
/*
 * Objective:
 *  Sort an unsorted array using insertion sort
 *  Sort a sorted array with a new element using insertion sort
 */

void insertionSort(int arr[], int size){//Insertion sort for sorted with new value
  int insert=arr[size-1];//Store the new value
  int j=size-2;//Start at the second to last index

  while(j>=0&&insert<arr[j]){//While out of order
    arr[j+1]=arr[j];//Clone previous value
    j--;//check next value
  }

  arr[j+1]=insert;//Insert value in proper place
}

void insertionSortUnsorted(int arr[],int size){//Insertion sort for unsorted list of elements
  for(int i=1;i<size;i++){
    int nxt=arr[i];//start at second element
    int pre=i-1;//start at predecessor

    while(pre>=0&&nxt<arr[pre]){
      arr[pre+1]=arr[pre];//Clone predecessor
      pre--;//Check predecessor
    }
    arr[pre+1]=nxt;//Store unsorted value in the right index
  }
}
#endif //C___INSERTION_SORT_H
