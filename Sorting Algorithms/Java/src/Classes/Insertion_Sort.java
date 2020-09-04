package Classes;
/*
 *Objective:
 *	Sort a list of sorted elements after a new element is added with insertion sort
 *	Sort a list of unsorted elements with insertion sort
 */
public class Insertion_Sort {
	private int[] arr_Sorted;//Holds the array of elements that are sorted
	private int[] arr_Unsorted;//Holds the array of elements that are unsorted

	public Insertion_Sort(){//Default constructor
		arr_Sorted=null;
		arr_Unsorted=null;
	}

	public Insertion_Sort(int size){//Overloaded constructor
		arr_Sorted=new int[size];
		arr_Unsorted=new int[size];
	}

	public Insertion_Sort(int[] arr_Sorted, int[] arr_Unsorted){//Overloaded constructor
		this.arr_Sorted=arr_Sorted;
		this.arr_Unsorted=arr_Unsorted;
	}

	public void printArray(int[] arr){//Print the array values
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+" ");
		}
	}

	public int[] insertionSort(int newValue){//First insertion sort algorithm
		int[] arr=new int[arr_Sorted.length+1];//Create local list with size + 1
		for(int i=0;i<arr.length-1;i++){//Copy values from sorted array locally
			arr[i]=arr_Sorted[i];
		}

		for(int j=arr.length-2;j>=0;j--){
			if(newValue<arr[j]){//Clone previous value
				arr[j+1]=arr[j];
			}
			else{//Position found
				arr[j+1]=newValue;
				break;
			}
			if(j==0){//end of list reached
				arr[j+1]=arr[j];
				arr[j]=newValue;
			}
		}
		return arr;
	}

	public int[] insertionSort(){//Second insertion sort algorithm
		int[] arr=arr_Unsorted;
		for(int i=1;i<arr.length;i++){//Traverse unsorted array from second element to last
			int nxt=arr[i];//Store next value
			int pre=i-1;//Always maintain 1 previous position
			while(pre>=0 && nxt<arr[pre]){//Check predecessors
				arr[pre+1]=arr[pre];//Clone previous value
				pre--;//keep regressing
			}
			arr[pre+1]=nxt;//insert value in correct position
		}
		return arr;
	}
}
