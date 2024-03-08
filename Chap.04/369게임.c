#include <stdio.h>

int solution(int order) {
    int res = 0;
    
    while(order)
    {
        int num = order % 10;
        if(num == 3 || num == 6 || num == 9)
            res++;
        order /= 10;
    }
    
    return res;
}