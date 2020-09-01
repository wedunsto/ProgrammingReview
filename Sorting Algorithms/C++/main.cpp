#include <iostream>
#include "Selection_Sort.h"
#include "Insertion_Sort.h"
using namespace std;

int main() {
  const int n=6;
  int arr[n]={9,10,5,8,54,25};
  int arr0[n]={1,2,3,4,5,0};
  int arr1[n]={9,10,5,8,54,25};

  cout<<"The unsorted array is:"<<endl;
  printArray(arr,n);
  selectionSort(arr,n);
  cout<<"The sorted array is:"<<endl;
  printArray(arr,n);

  cout<<"The unsorted array is:"<<endl;
  printArray(arr0,n);
  insertionSort(arr0,n);
  cout<<"The sorted array is:"<<endl;
  printArray(arr0,n);

  cout<<"The unsorted array is:"<<endl;
  printArray(arr1,n);
  insertionSortUnsorted(arr1,n);
  cout<<"The sorted array is:"<<endl;
  printArray(arr1,n);
}
