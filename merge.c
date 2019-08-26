#include "sort.h"

extern void swap(int* a, int* b);
extern void insertion_sort(int* arr, int len);

void merge_sort(int* arr, int len)
{
	int i, j, k;
	int f = len / 2;

	if(len < 5){
		insertion_sort(arr, len);
		return;
	}

	merge_sort(arr, f);
	merge_sort(arr + f, len - f);

	int sort[array_size] = { 0 };

	for(i = 0, j = f, k = 0; i < f && j < len;)
		sort[k++] = (arr[i] < arr[j]) ? arr[i++] : arr[j++];

	while(i < f) sort[k++] = arr[i++];
	while(j < len) sort[k++] = arr[j++];

	for(i = 0; i < len; i++)
		arr[i] = sort[i];
}
