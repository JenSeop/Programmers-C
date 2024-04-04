#include <stdio.h>
#include <stdlib.h>

int* solution(int n, int k) {
    int* res = (int*)malloc((n / k) * sizeof(int));
    
    for(int idx = 0; idx < (n / k); idx++)
        res[idx] = (idx + 1) * k;
    
    return res;
}