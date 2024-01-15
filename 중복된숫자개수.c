#include <stdio.h>

int solution(int array[], size_t array_len, int n) {
    int i=-1;
    int res=0;
    
    while(++i<array_len)
        if(array[i]==n)
            res++;
    
    return res;
}