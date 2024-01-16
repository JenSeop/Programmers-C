#include <stdio.h>

int solution(int array[], size_t array_len) {
    int i=-1;
    int j=-1;
    int swap=0;
    
    while(++i<array_len)
    {
        while(++j<array_len-1-i)
            if(array[j]>array[j+1])
            {
                swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        j=-1;
    }
    
    return array[array_len/2];
}