#include <stdio.h>
#include <stdlib.h>

int* solution(int num[], size_t len, int n) {
    int* res = (int*)malloc(n * sizeof(int));
    
    for(int idx = 0; idx < n; idx++)
        res[idx] = num[idx];
    
    return res;
}