#include <stdio.h>
#include <stdlib.h>

int* solution(const char* str) {
    int* res = (int*)calloc(52, sizeof(int));
    
    while(*str)
    {
        if(*str >= 'A' && *str <= 'Z')
            res[*str - 'A']++;
        else
            res[*str - 'A' - 6]++;
        str++;
    }
        
    return res;
}