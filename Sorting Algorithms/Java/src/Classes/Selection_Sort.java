package Classes;
/*
 *Objective:
 *	Create a class capable of performing the selection sort algorithm
 */
public class Selection_Sort {
	private int[] arr;//Contains the array to be sorted

	public Selection_Sort(){//Default constructor
		arr = new int[0];
	}

	public Selection_Sort(int[] arr){//Overloaded constructor
		this.arr=arr;
	}

	public void printArray(){
		for(int i=0;i<arr.length;i++){
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}

	public void selectionSort(){//Selection sort algorithm
		for(int i=0;i<arr.length;i++){//compare first value
			for(int j=i+1;j<arr.length;j++){//compare next value
				if(arr[i]>arr[j]){//if unsorted
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;//swap
				}
			}
		}
	}

	//Getters and setters
	public void setArr(int[] arr){
		this.arr=arr;
	}

	public int getArrElement(int index){
		return arr[index];
	}

	public int[] getArr(){
		return this.arr;
	}
}
