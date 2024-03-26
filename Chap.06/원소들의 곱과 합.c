#include <stdio.h>
#include <math.h>

int sum_pow_idx(int num[], int len)
{
    int res = 0;
    
    for(int idx = 0; idx < len; idx++)
        res += num[idx];
    
    return pow(res, 2);
}

int mul_all_idx(int num[], int len)
{
    int res = 1;
    
    for(int idx = 0; idx < len; idx++)
        res *= num[idx];
    
    return res;
}

int solution(int num[], size_t len) {
    if(mul_all_idx(num,len) < sum_pow_idx(num,len))
        return 1;
    return 0;
}