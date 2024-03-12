#include <stdio.h>

int solution(int i, int j, int k) {
    int res = 0;
    int idx = i - 1;
    
    while(++idx <= j)
    {
        int temp = idx;
        while(temp)
        {
            if(temp % 10 == k)
                res++;
            temp /= 10;
        }
    }
    
    return res;
}