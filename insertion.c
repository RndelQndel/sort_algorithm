#include "sort.h"

void insertion_sort(int*  arr, int len)
{
    int temp = 0;
    for(int i = 0; i < len - 1; i++){
        for(int j = i + 1; j > 0; j--){
            if(arr[j] < arr[j - 1]){
                temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}