#include <stdio.h>

#define CAL(n) ((n) % 2 == 0 ? (n) / 2 : ((n) - 1) / 2)

int solution(int num[], size_t len) {
    int res = 0;
    
    for(int idx = 0; idx < len; idx++)
        for(;num[idx];res++)
            num[idx] = CAL(num[idx]);
    
    return res - len;
}