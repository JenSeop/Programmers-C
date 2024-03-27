#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str, int rows, int cols) {
    char* res = (char*)malloc((strlen(str) + 1) * sizeof(char));
    int spc = 0;
    
    for(int idx = cols - 1; idx < strlen(str); idx += rows)
        res[spc++] = str[idx];
    res[spc] = NULL;
    
    return res;
}