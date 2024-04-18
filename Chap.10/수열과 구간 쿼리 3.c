#include <stdio.h>
#include <stdlib.h>

int* solution(int a[], size_t alen, int** q, size_t q_r, size_t q_c) {
    int* res = (int*)malloc(alen * sizeof(int));
    
    for(int idx = 0; idx < alen; idx++)
        res[idx] = a[idx];
    
    for(int r = 0; r < q_r; r++)
    {
        int temp = res[q[r][0]];
        res[q[r][0]] = res[q[r][1]];
        res[q[r][1]] = temp;
    }
    
    return res;
}