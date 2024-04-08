#include <stdio.h>
#include <stdlib.h>

#define COL(n) ((n) % 2 ? 3 * n + 1 : n / 2) 

int* solution(int n) {
    int* res = (int*)malloc((n - 3) * sizeof(int));
    
    res[0] = n;
    for(int idx = 1; n != 1; idx++)
    {
        n = COL(n);
        res[idx] = n;
    }
    
    return res;
}