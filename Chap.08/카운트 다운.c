#include <stdio.h>
#include <stdlib.h>

int* solution(int start, int end) {
    int* res = (int*)malloc((start - end) * sizeof(int));
    int rdx = 0;
    
    for(start; start >= end; start--)
        res[rdx++] = start;
    
    return res;
}