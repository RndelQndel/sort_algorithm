#include "sort.h"

void bubble_sort(int* arr, int len)
{
	int swap = 0;
	for(int i = 0; i < len; i++){
		for(int j = 0; j < len - i - 1; j++){
			if(arr[j] > arr[j + 1]){
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}
}
