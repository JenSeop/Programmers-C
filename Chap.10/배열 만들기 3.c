#include <stdio.h>
#include <stdlib.h>

size_t res_len(int **itv, size_t itv_rows, size_t itv_cols)
{
    int res = 0;
    
    for(int row = 0; row < itv_rows; row++)
        for(int col = 0; col < itv_cols; col++)
            res += itv[row][col];
    
    return res;
}

int* solution(int arr[], size_t arr_len, int** itv, size_t itv_rows, size_t itv_cols) {
    int len = res_len(itv, itv_rows, itv_cols);
    int* res = (int*)malloc(len * sizeof(int));
    int rpc = 0;
    
    for(int row = 0; row < itv_rows; row++)
        for(int idx = itv[row][0]; idx <= itv[row][1]; idx++)
            res[rpc++] = arr[idx];
    
    return res;
}