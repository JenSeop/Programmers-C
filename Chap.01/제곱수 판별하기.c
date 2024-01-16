#include <stdio.h>

int solution(int n) {
    int i = -1;
    
    while(++i <= n/2)
        if(i*i == n)
            return 1;
    
    return 2;
}