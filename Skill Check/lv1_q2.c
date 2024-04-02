#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIGN(n) ((n) == 43 ? 1 : (n) == 45 ? -1 : 1)
#define CTOI(n) ((n) > 47 && (n) < 58 ? (n-48) : 0)

int solution(const char* s) {
    int sign = SIGN(s[0]);
    int res = 0;
    
    for(int idx = 0; idx < strlen(s); idx++)
        res = (res * 10) + CTOI(s[idx]);
        
    return sign * res;
}