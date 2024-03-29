#include <stdio.h>
#include <stdlib.h>

int* solution(int num[], size_t len, int n) {
    int* res = (int*)malloc((len - (n - 1)) * sizeof(int));
    int spc = 0;
    
    for(int idx = n - 1; idx < len; idx++)
        res[spc++] = num[idx];
    
    return res;
}