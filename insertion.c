#include "sort.h"

extern void swap(int *a, int *b);

void insertion_sort(int*  arr, int len)
{
    for(int i = 0; i < len - 1; i++){
        for(int j = i + 1; j > 0; j--){
            if(arr[j] < arr[j - 1]){
				swap(&arr[j - 1], &arr[j]);
            }
        }
    }
}
