#include <stdio.h>

int solution(int num[], size_t num_len) {
    int res = 45;
    
    for(int idx = 0; idx < num_len; idx++)
        res -= num[idx];
    
    return res;
}