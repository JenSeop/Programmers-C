#include <stdio.h>

int solution(const char* num) {
    int res = 0;
    
    for(int idx = 0; num[idx]; idx++)
        res += num[idx] - 48;
    
    return res;
}