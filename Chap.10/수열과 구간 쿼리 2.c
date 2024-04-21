#include <stdio.h>
#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int** q, size_t q_rows, size_t q_cols) {
    int* res = (int*)malloc(q_rows * sizeof(int));
    int rpc = 0;
    
    for(int row = 0; row < q_rows; row++)
    {
        int min = 1000001;
        for(int idx = 0; idx < arr_len; idx++)
            if(idx >= q[row][0] && idx <= q[row][1])
                if(min >= arr[idx] && arr[idx] > q[row][2])
                    min = arr[idx];
        res[rpc++] = min == 1000001 ? -1 : min;
    }
                
    return res;
}