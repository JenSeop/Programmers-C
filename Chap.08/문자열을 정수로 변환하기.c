#include <stdio.h>

int solution(const char* str) {
    int res = str[0] - 48;
    
    for(int idx = 1; idx < strlen(str); idx++)
        res = (res * 10) + str[idx] - 48;
    
    return res;
}