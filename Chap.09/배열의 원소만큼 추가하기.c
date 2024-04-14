#include <stdio.h>
#include <stdlib.h>

int res_len(int arr[], int len)
{
    int res = 0;
    
    for(int idx = 0; idx < len; idx++)
        res += arr[idx];
    
    return res;
}

int* solution(int arr[], size_t arr_len) {
    int* res = (int*)malloc(res_len(arr, arr_len) * sizeof(int));
    int rpc = 0;
    
    for(int idx = 0; idx < arr_len; idx++)
        for(int rdx = 0; rdx < arr[idx]; rdx++)
            res[rpc++] = arr[idx];
    
    return res;
}