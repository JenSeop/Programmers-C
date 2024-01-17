#include <stdio.h>

int* solution(int arr[], size_t arr_len) {
    int* res = (int*)malloc(2 * sizeof(int));
    int arr_i = -1;
    res[0] = 0;
    
    while(++arr_i < arr_len)
        if(arr[arr_i] > res[0])
        {
            res[0] = arr[arr_i];
            res[1] = arr_i;
        }
    
    return res;
}