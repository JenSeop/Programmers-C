#include <stdio.h>
#include <stdlib.h>

#define OEC(l) ((l) % 2 == 0 ? 1 : 0)
#define ODD(i, n) ((i) % 2 != 0 ? n : 0)
#define EVE(i, n) ((i) % 2 == 0 ? n : 0)

int* solution(int arr[], size_t len, int n) {
    int* res = (int*)malloc(len * sizeof(int));
    
    for(int idx = 0; idx < len; idx++)
    {
        res[idx] = arr[idx];
        if(!OEC(len)) res[idx] = arr[idx] + EVE(idx, n);
        if(OEC(len)) res[idx] = arr[idx] + ODD(idx, n);
    }
    
    return res;
}