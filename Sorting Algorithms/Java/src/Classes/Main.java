package Classes;

public class Main {
	public static Selection_Sort selection_Sort = new Selection_Sort();

	public static void main(String[] args){
		int[] arr=new int[]{9,10,5,8,54,25};//Unsorted array
		selection_Sort.setArr(arr);
		System.out.println("The unsorted array is:");
		selection_Sort.printArray();
		selection_Sort.selectionSort();
		System.out.println("The sorted array is:");
		selection_Sort.printArray();
	}
}
