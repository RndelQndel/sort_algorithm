#include "sort.h"

extern void swap(int* a, int* b);

void quick_sort(int* arr, int left, int right)
{
	int pivot = left;
	int j = left;
	int i = left + 1;

	if(left < right){
		for(; i <= right; i++){
			if(arr[i] < arr[pivot])
				swap(&arr[i], &arr[++j]);
		}
		swap(&arr[left], &arr[j]);
		pivot = j;
		quick_sort(arr, left, pivot - 1);
		quick_sort(arr, pivot + 1, right);
	}
}
