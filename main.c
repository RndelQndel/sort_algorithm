#include "sort.h"

void swap(int *a, int * b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void print_arr(int* arr, int len)
{
    for(int i = 0; i < array_size; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

int main()
{
	int arr1[array_size] = {0};
	int arr2[array_size] = {0};

	srand((unsigned int)time(0));

	for(int i = 0; i < array_size; i++)
		arr1[i] = rand() %1000;

	printf("Original : \t");
	print_arr(arr1, array_size);

	// Bubble sort
	memcpy(arr2, arr1, array_size * sizeof(int) );
	// sort algorith
	printf("Bubble Sort\n");
	bubble_sort(arr2, array_size);

	printf("Result : \t");
	print_arr(arr2, array_size);

	// Selection sort
	memcpy(arr2, arr1, array_size * sizeof(int) );
	// sort algorith
	printf("Selection Sort\n");
	selection_sort(arr2, array_size);

	printf("Result : \t");
	print_arr(arr2, array_size);

	// Insertion sort
	memcpy(arr2, arr1, array_size * sizeof(int) );
	// sort algorith
	printf("Insertion Sort\n");
	insertion_sort(arr2, array_size);

	printf("Result : \t");
	print_arr(arr2, array_size);

	// Quick sort
	memcpy(arr2, arr1, array_size * sizeof(int) );
	// sort algorith
	printf("Quick Sort\n");
	quick_sort(arr2, 0, array_size - 1);

	printf("Result : \t");
	print_arr(arr2, array_size);

	// Merge sort
	memcpy(arr2, arr1, array_size * sizeof(int) );
	// sort algorith
	printf("Merge Sort\n");
	merge_sort(arr2, array_size);

	printf("Result : \t");
	print_arr(arr2, array_size);

	return 0;
}
