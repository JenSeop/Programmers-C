#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str, int s, int e) {
    char* res = (char*)malloc((strlen(str) + 1) * sizeof(char));
    int idx = s;
    
    strcpy(res, str);
    for(e; e >= s; e--)
        res[idx++] = str[e];
    res[strlen(str)] = NULL;
    
    return res;
}