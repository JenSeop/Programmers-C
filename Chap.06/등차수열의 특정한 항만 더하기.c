#include <stdio.h>
#include <stdbool.h>

int solution(int a, int d, bool inc[], size_t inc_len) {
    int res = 0;
    
    for(int idx = 0; idx < inc_len; idx++)
        if(inc[idx])
            res += (a + d * idx);
    
    return res;
}