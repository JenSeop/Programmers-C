#include <stdio.h>
#include <stdlib.h>

#define CAL(i, k, n) ((i) % (k) == 0 ? (n + 1) : (n))

int* solution(int arr[], size_t len, int** q, size_t q_r, size_t q_c) {
    int* res = (int*)malloc(len * sizeof(int));
    
    for(int qdx = 0; qdx < q_r; qdx++)
        for(int idx = q[qdx][0]; idx <= q[qdx][1]; idx++)
            arr[idx] = CAL(idx, q[qdx][2], arr[idx]);
    
    for(int idx = 0; idx < len; idx++)
        res[idx] = arr[idx];
    
    return res;
}