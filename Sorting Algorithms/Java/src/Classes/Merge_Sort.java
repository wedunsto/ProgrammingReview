package Classes;

public class Merge_Sort {
	/*
	 *Objective:
	 *	Sort values using merge sort
	 */
	public void printArray(int[] arr){//Method to print array values
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}

	public void merge(int[] arr, int start, int mid, int stop){
		int leftLimit=mid-start+1;//limit the indexes from start to mid inclusively
		int rightLimit=stop-mid;//limit the indexes from mid to stop inclusively
		int[] left=new int[leftLimit];//Create an array for the left values
		int[] right=new int[rightLimit];//Create an array for the right values

		for(int i=0;i<leftLimit;i++){
			left[i]=arr[start+i];//Populate the left array with values from start to mid
		}
		for(int j=0;j<rightLimit;j++){
			right[j]=arr[mid+1+j];//Populate the right array with values from mid+1 to stop
		}

		//create iterators for the left, right, and final array
		int a=0;
		int b=0;
		int c=start;

		while(a<leftLimit & b<rightLimit){
			if(left[a]<right[b]){//if the value on the left side is lower, insert next
				arr[c]=left[a];
				a++;
			}
			else{//if the value on the right side is lower, insert next
				arr[c]=right[b];
				b++;
			}
			c++;
		}
		while(a<leftLimit){//insert remaining left values
			arr[c]=left[a];
			a++;
			c++;
		}
		while(b<rightLimit){//insert remaining right values
			arr[c]=right[b];
			b++;
			c++;
		}
	}

	public void mergeSort(int[] arr, int start, int stop){
		if(stop<=start){
			return;
		}
		//Split the array until all elements are isolated
		int mid=(start+stop)/2;//Properly find the midpoint
		mergeSort(arr,start,mid);//merge sort the left side
		mergeSort(arr,mid+1,stop);//merge sort the right side
		merge(arr,start,mid,stop);
	}
}
