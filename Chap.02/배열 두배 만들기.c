#include <stdio.h>

int* solution(int numbers[], size_t numbers_len) {
    int* res = (int*)malloc(numbers_len * sizeof(int));
    int i = -1;
    
    while(++i < numbers_len)
        res[i]=numbers[i]*2;
    
    return res;
}