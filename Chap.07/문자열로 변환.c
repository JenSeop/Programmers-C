#include <stdio.h>
#include <stdlib.h>

char* solution(int n) {
    char* res = (char*)malloc(6 * sizeof(char));
    int rdx = 0;
    int lst[5] = {0, };
    int ldx = 0;
    
    while(n)
    {
        lst[ldx++] = n % 10;
        n /= 10;
    }
    
    for(int idx = ldx - 1; idx >= 0; idx--)
        res[rdx++] = lst[idx] + 48;
    res[ldx] = NULL;
    
    return res;
}