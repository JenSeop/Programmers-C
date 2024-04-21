#include <stdio.h>
#include <stdlib.h>

#define CHK(n) ((n) % 2 ? 1 : 0)
#define CAL(n, c) (!(c) && (n >= 50) ? (n / 2) : (c) && (n < 50) ? (n * 2) : (n))

int* solution(int arr[], size_t len) {
    int* res = (int*)malloc(len * sizeof(int));
    
    for(int idx = 0; idx < len; idx++)
        res[idx] = CAL(arr[idx], CHK(arr[idx]));
    
    return res;
}