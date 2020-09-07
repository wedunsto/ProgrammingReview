#ifndef C___MERGE_SORT_H
#define C___MERGE_SORT_H
#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int stop){
  //Create constraints
  int leftLimit=mid-start+1;//Create index limit from start to mid inclusively
  int rightLimit=stop-mid;//Create index limit from mid to stop
  int a=0;//Create iterator for the left half
  int b=0;//Create iterator for the right half
  int c=start;//Create iterator for the final array
  int left[leftLimit];//Create left half
  int right[rightLimit];//Create right half

  //Populate left and right half
  for(int i=0;i<leftLimit;i++){left[i]=arr[start+i];}//Store values from start to mid
  for(int j=0;j<rightLimit;j++){right[j]=arr[mid+1+j];}//Store values from mid to stop

  //Insert halves into final array
  while(a<leftLimit && b<rightLimit){//Traverse halves
    if(left[a]<right[b]){//If left value is lower than right value insert left next
      arr[c]=left[a];
      a++;//Move to next value on the left half
    }
    else{//If right value is lower than left value insert right next
      arr[c]=right[b];
      b++;//Move to next value on the right half
    }
    c++;//Move to next index in the final array
  }
  //Insert remaining values
  while(a<leftLimit){
    arr[c]=left[a];
    a++;//Move to next value on the left half
    c++;//Move to next index in the final array
  }
  while(b<rightLimit){
    arr[c]=right[b];
    b++;//Move to next value on the right half
    c++;//Move to next index in the final array
  }
}

void mergeSort(int arr[], int start, int stop){//Create the merge sort method
  if(stop<=start){//if base condition reached
    return;
  }
  int mid=start+(stop-start)/2;//Find the midpoint
  mergeSort(arr,start,mid);//Perform merge sort on the left half of the array
  mergeSort(arr,mid+1,stop);//Perform merge sort on the right half of the array
  merge(arr,start,mid,stop);//Merge the sorted halves of the array
}

#endif //C___MERGE_SORT_H
