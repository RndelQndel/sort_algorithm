#include <time.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define array_size 100

void bubble_sort(int*, int);
void selection_sort(int*, int);
void insertion_sort(int* arr, int len);
void quick_sort(int* arr, int left, int right);
void merge_sort(int* arr, int len);
