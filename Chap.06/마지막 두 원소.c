#include <stdio.h>
#include <stdlib.h>

#define CHK(lst, bef) ((lst) > (bef) ? (lst - bef) : (lst * 2))

int* solution(int num[], size_t len) {
    int* res = (int*)malloc((len + 1) * sizeof(int));
    
    for(int idx = 0; idx < len; idx++)
        res[idx] = num[idx];
    res[len] = CHK(num[len - 1], num[len - 2]);
    
    return res;
}