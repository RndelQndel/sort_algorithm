#include "sort.h"

extern void swap(int* a, int *b);

void selection_sort(int* arr, int len)
{
    int temp = 0;

    for(int i = 0; i < len; i++){
        temp = i;
        for(int j = i + 1; j < len; j++){
            if(arr[temp] > arr[j])
                temp = j;
        }
		swap(&arr[i], &arr[temp]);
	}
}
