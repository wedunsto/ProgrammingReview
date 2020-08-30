#include <iostream>
#include "Selection_Sort.h"
using namespace std;

int main() {
  const int n=6;
  int arr[n]={9,10,5,8,54,25};
  cout<<"The unsorted array is:"<<endl;
  printArray(arr,n);
  selectionSort(arr,n);
  cout<<"The sorted array is:"<<endl;
  printArray(arr,n);
}
