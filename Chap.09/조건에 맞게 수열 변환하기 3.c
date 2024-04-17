#include <stdio.h>
#include <stdlib.h>

int* solution(int arr[], size_t len, int k) {
    int* res = (int*)malloc(len * sizeof(int));
    
    for(int idx = 0; idx < len; idx++)
        res[idx] = (k % 2) ? (arr[idx] * k) : (arr[idx] + k);
    
    return res;
}