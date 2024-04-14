#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* num) {
    char* res = (char*)malloc((strlen(num) + 1) * sizeof(int));
    
    strcpy(res, num);
    for(int idx = 0; idx < strlen(num) - 4; idx++)
        res[idx] = '*';
    res[strlen(num)] = NULL;
    
    return res;
}