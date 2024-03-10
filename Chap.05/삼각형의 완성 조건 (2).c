#include <stdio.h>

int tri_check(int a, int b, int c)
{
    if(a + b > c && a + c > b && b + c > a)
        return 1;
    
    return 0;
}

int solution(int sides[], size_t sides_len) {
    int cnt = 0;
    int idx = -1;
    int lmt = sides[0] + sides[1];
    
    while(++idx < lmt)
        if(tri_check(sides[0], sides[1], idx))
            cnt++;
    
    return cnt;
}