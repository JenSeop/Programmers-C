#include <stdio.h>

int* solution(int n) {
    int len = (n+1)/2;
    int *res = (int*)malloc(len * sizeof(int));
    int i = -1;
    int j = 1;
    
    while(++i < len)
    {
        res[i] = j;
        j += 2;
    }
    
    
    return res;
}