#include <stdio.h>

int composite(int n)
{
    int cnt = 0;
    
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            cnt++;
    
    return cnt;
}

int solution(int n) {
    int res = 0;
    int idx = 0;
    
    while(++idx <= n)
        if(composite(idx) > 2)
            res++;
    
    return res;
}