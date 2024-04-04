#include <stdio.h>
#include <stdlib.h>

char* solution(const char* str) {
    char* res = (char*)malloc((strlen(str) + 1) * sizeof(char));
    int rdx = 0;
    int flg = 0;
    
    for(int idx = 0; idx < strlen(str); idx++)
    {
        if(str[idx] != 48)
            flg = 1;
        if(flg)
            res[rdx++] = str[idx];
    }
    res[rdx] = NULL;
    
    return res;
}