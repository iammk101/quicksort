// C++ implementation of QuickSort

#include <bits/stdc++.h>
#include <algorithm.h>
using namespace std;

// A utility function to swap two elements 
void swap(int* af, int* bf) 
{ 
    int t = *af; 
    *af = *bf; 
    *bf = t; 
} 

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element

			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);

	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int loww, int high)
{
	if (loww < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, loww, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, loww, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
    printf("\n");
}

// Driver Code
int main()
{

	int arr[] = {110, 72 , 16 , 25, 17, 18, 91, 10, 24, 13 , 47,28};

	int n = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, n - 1);
	cout << "Sorted array: \n";

	
	printArray(arr, n);
	cout<<3323+7474/33;
	return 0;
}

// This code is contributed by SHAKTI
// End of the program
