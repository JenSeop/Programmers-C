#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str, int n) {
    char* res = (char*)malloc((n + 1) * sizeof(char));
    int spc = 0;
    
    for(int idx = strlen(str) - n; idx < strlen(str); idx++)
        res[spc++] = str[idx];
    res[n] = '\0';
    
    return res;
}