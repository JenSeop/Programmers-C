#include <stdio.h>
#include <stdlib.h>

#define TRS(c) ((c) < 108 ? 108 : (c))

char* solution(const char* str) {
    char* res = (char*)malloc((strlen(str) + 1) * sizeof(char));
    
    for(int idx = 0; idx < strlen(str); idx++)
        res[idx] = TRS(str[idx]);
    res[strlen(str)] = NULL;
    
    return res;
}