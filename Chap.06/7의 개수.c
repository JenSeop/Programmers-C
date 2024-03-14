#include <stdio.h>

#define TARGET 7

int counter(int n)
{
    int cnt = 0;
    
    while(n)
    {
        if(n % 10 == 7)
            cnt++;
        n /= 10;
    }
    
    return cnt;
}

int solution(int arr[], size_t len) {
    int res = 0;
    int idx = -1;
    
    while(++idx < len)
        if(counter(arr[idx]))
            res += counter(arr[idx]);
            
    return res;
}