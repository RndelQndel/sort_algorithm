#include "sort.h"

int main()
{
	int arr1[10] = {0};
	int arr2[10] = {0};

	srand((unsigned int)time(0));

	for(int i = 0; i < 10; i++)
		arr1[i] = rand() %1000;

	printf("Original : \t");
	for(int i = 0; i < 10; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	memcpy(arr2, arr1, 10 * sizeof(int) );
	// sort algorith
	printf("Bubble Sort\n");
	bubble_sort(arr2, 10);

	printf("Result : \t");
	for(int i = 0; i < 10; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	memcpy(arr2, arr1, 10 * sizeof(int) );
	// sort algorith
	printf("Selection Sort\n");
	selection_sort(arr2, 10);

	printf("Result : \t");
	for(int i = 0; i < 10; i++)
		printf("%d ", arr2[i]);
	printf("\n");

	return 0;
}
