#include <stdio.h>
#include <stdlib.h>

int* solution(int arr[], size_t len, int** q, size_t q_r, size_t q_c) {
    int* res = (int*)malloc(len * sizeof(int));
    
    for(int qdx = 0; qdx < q_r; qdx++)
        for(int idx = q[qdx][0]; idx <= q[qdx][1]; idx++)
            arr[idx] += 1;
    
    for(int idx = 0; idx < len; idx++)
        res[idx] = arr[idx];
    
    return res;
}