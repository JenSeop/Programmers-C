#include <stdio.h>

#define EORO(n) ((n) % 2 == 0 ? 1 : 0)

int solution(int num[], size_t len) {
    int res = 0, eve = 0, odd = 0;
    
    for(int idx = 0; idx < len; idx++)
    {
        if(EORO(idx + 1)) eve += num[idx];
        else odd += num[idx];
    }
    
    return eve > odd ? eve : odd;
}