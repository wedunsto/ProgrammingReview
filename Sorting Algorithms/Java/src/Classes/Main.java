package Classes;

public class Main {
	public static Selection_Sort selection_Sort=new Selection_Sort();
	public static int[] unsorted_Array=new int[]{9,10,5,8,54,25};
	public static int[] sorted_Array=new int[]{1,2,4,5,6};
	public static Insertion_Sort insertion_Sort=new Insertion_Sort(sorted_Array, unsorted_Array);
	public static Bubble_Sort bubble_sort=new Bubble_Sort();
	public static Merge_Sort merge_sort=new Merge_Sort();

	public static void main(String[] args){
		int[] arr=new int[]{9,10,5,8,54,25};//Unsorted array
		int[] arr1=new int[]{9,10,5,8,54,25};//Unsorted array

		bubble_sort.setArr(arr);
		selection_Sort.setArr(arr);
		System.out.println("The unsorted array is:");
		selection_Sort.printArray();
		selection_Sort.selectionSort();
		System.out.println("The sorted array is:");
		selection_Sort.printArray();

		int[] test=insertion_Sort.insertionSort();
		insertion_Sort.printArray(test);

		System.out.println("The unsorted array is:");
		bubble_sort.printArray(bubble_sort.getArr());
		int[] bubbleSorted=bubble_sort.bubbleSort();
		System.out.println("The sorted array is:");
		bubble_sort.printArray(bubbleSorted);

		System.out.println("The unsorted array is:");
		merge_sort.printArray(arr1);
		merge_sort.mergeSort(arr1,0,arr.length-1);
		System.out.println("The sorted array is:");
		merge_sort.printArray(arr1);

	}
}
