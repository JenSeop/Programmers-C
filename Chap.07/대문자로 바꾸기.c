#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRS(c) ((c) > 96 && (c) < 123 ? -32 : 0)

char* solution(const char* str) {
    char* res = (char*)malloc((strlen(str) + 1) * sizeof(char));
    
    for(int idx = 0; idx < strlen(str); idx++)
        res[idx] = str[idx] + TRS(str[idx]);
    res[strlen(str)] = '\0';
    
    return res;
}