#include <stdio.h>
#include <stdlib.h>

int* solution(int a[], size_t a_len, int d[], size_t d_len) {
    int r_len = 0;
    
    for(int idx = 0; idx < a_len; idx++)
        for(int ddx = 0; ddx < d_len; ddx++)
            if(a[idx] == d[ddx])
            {
                a[idx] = 0;
                r_len++;
            }
    
    int* res = (int*)malloc((a_len - r_len) * sizeof(int));
    int rdx = 0;
    
    for(int idx = 0; idx < a_len; idx++)
        if(a[idx])
            res[rdx++] = a[idx];
    
    return res;
}