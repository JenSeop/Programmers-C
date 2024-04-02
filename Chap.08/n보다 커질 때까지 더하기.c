#include <stdio.h>

#define CHK(res, num) ((res) > (num) ? 0 : 1)

int solution(int num[], size_t num_len, int n) {
    int res = 0;
    
    for(int idx = 0; CHK(res, n); idx++)
        res += num[idx];
    
    return res;
}