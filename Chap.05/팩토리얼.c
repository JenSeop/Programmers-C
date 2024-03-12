#include <stdio.h>

int solution(int n) {
    int fac = 1;
    int idx = 0;
    
    while(++idx)
    {
        fac *= idx;
        if(fac > n)
            return idx - 1;
    }
}