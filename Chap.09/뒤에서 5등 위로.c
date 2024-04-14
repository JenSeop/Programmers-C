#include <stdio.h>
#include <stdlib.h>

int* solution(int num[], size_t num_len) {
    int* res = (int*)malloc((num_len - 5) * sizeof(int));
    
    for(int i = 0; i < num_len; i++)
        for(int j = 0; j < num_len - i - 1; j++)
            if(num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
    
    for(int i = 0; i < num_len - 5; i++)
        res[i] = num[i + 5];
    
    return res;
}