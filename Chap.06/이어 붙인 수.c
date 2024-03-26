#include <stdio.h>

#define EVE(n) ((n) % 2 == 0 ? n : 0)
#define ODD(n) ((n) % 2 != 0 ? n : 0)
#define MOV(n) ((n) ? 10 : 1)

int solution(int num[], size_t len) {
    int eve = 0, odd = 0;
    
    for(int idx = 0; idx < len; idx++)
    {
        eve = eve * MOV(EVE(num[idx])) + EVE(num[idx]);
        odd = odd * MOV(ODD(num[idx])) + ODD(num[idx]);
    }
    
    return eve + odd;
}