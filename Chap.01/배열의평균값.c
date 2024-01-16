#include <stdio.h>

double solution(int numbers[], size_t numbers_len) {
    int i=-1;
    int res=0;
    
    while(++i <= numbers_len - 1)
        res+=numbers[i];
    
    return (double)res/i;
}