#include <stdio.h>
#include <stdlib.h>

int res_len(char* str)
{
    int res = 1;
    
    for(int idx = 0; idx < strlen(str); idx++)
        if(str[idx] == 'x')
            res++;
    
    return res;
}

int* solution(const char* str) {
    int* res = (int*)calloc(res_len(str), sizeof(int));
    int rdx = 0;
    
    for(int idx = 0; idx < strlen(str); idx++)
    {
        if(str[idx] != 'x') res[rdx]++;
        else rdx++;
    }

    return res;
}