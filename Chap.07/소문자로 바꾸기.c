#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LOW(n) ((n) < 91 ? (n + 32) : (n))

char* solution(const char* str) {
    char* res = (char*)malloc((strlen(str) + 1) * sizeof(char));
    
    for(int idx = 0; idx < strlen(str); idx++)
        res[idx] = LOW(str[idx]);
    res[strlen(str)] = NULL;
    
    return res;
}