package Classes;
/*
 *Objective:
 *	Sort values using bubble sort
 */
public class Bubble_Sort {
	private int[] arr;//Contains the unsorted array

	public Bubble_Sort(){//Default constructor
		arr=null;
	}

	public Bubble_Sort(int[] arr){//Overloaded constructor
		this.arr=arr;
	}

	public void printArray(int[] arr){//Method to print array values
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}

	public int[] bubbleSort(){//Method to sort array using bubble sort
		int[] array=arr;
		for(int i=0;i<array.length-1;i++){//Determines which pass is active
			int reducedSize=array.length-i-1;//Truncate nested for loop; largest value placed at end
			for(int j=0;j<reducedSize;j++){//Nested for loop to compare adjacent elements
				if(array[j]>array[j+1]){//If values out of order, swap
					int temp=array[j];
					array[j]=array[j+1];
					array[j+1]=temp;
				}
			}
		}
		return array;
	}

	//Getters and setters
	public void setArr(int[] arr){
		this.arr=arr;
	}

	public int[] getArr(){
		return this.arr;
	}
}
