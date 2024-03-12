#include <stdio.h>

int* solution(int arr[], size_t len) {
    int* res = (int*)malloc(len * sizeof(int));
    
    for(int i = 0; i < len; i++)
        res[i] = len;
    
    for(int i = 0; i < len; i++)
        for(int j = 0; j < len; j++)
            if(i != j && arr[i] > arr[j])
                res[i]--;
    
    return res;
}