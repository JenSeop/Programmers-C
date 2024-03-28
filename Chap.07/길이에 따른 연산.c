#include <stdio.h>

int sum_all(int num[], int len)
{
    int res = 0;
    
    for(int idx = 0; idx < len; idx++)
        res += num[idx];
    
    return res;
}

int mul_all(int num[], int len)
{
    int res = 1;
    
    for(int idx = 0; idx < len; idx++)
        res *= num[idx];
    
    return res;
}

int solution(int num[], size_t len) {
    if(len > 10)
        return sum_all(num, len);
    return mul_all(num, len);
}