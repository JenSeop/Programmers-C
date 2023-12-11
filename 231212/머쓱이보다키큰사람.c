#include <stdio.h>

int solution(int array[], size_t array_len, int height) {
    int i=-1;
    int res=0;
    
    while(++i<=array_len-1)
        if(array[i]>height)
            res++;
    
    return res;
}