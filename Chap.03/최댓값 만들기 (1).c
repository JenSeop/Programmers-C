#include <stdio.h>

int solution(int numbers[], size_t numbers_len) {
    int max = 0;
    
    for(int i=0; i<numbers_len; i++)
        for(int j=0; j<i+1; j++)
            if(i!=j)
                if(numbers[i]*numbers[j] > max)
                    max = numbers[i]*numbers[j];
    
    return max;
}