#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRS(c, t) ((c) == (t) ? (c - 32) : (c))

char* solution(const char* str, const char* t) {
    char* res = (char*)malloc((strlen(str) + 1) * sizeof(char));
    
    for(int idx = 0; idx < strlen(str); idx++)
        res[idx] = TRS(str[idx], t[0]);
    res[strlen(str)] = NULL;
    
    return res;
}