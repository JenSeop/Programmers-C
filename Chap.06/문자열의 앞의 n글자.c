#include <stdio.h>
#include <stdlib.h>

char* solution(const char* str, int n) {
    char* res = (char*)malloc((n + 1) * sizeof(char));
    
    for(int idx = 0; idx < n; idx++)
        res[idx] = str[idx];
    res[n] = NULL;
    
    return res;
}