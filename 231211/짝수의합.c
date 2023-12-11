#include <stdio.h>

int solution(int n) {
    int i=0;
    int res=0;
    
    while(++i <= n)
        if(!(i%2))
            res = res + i;
    return res;
}