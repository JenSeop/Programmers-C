#include <stdio.h>
#include <string.h>

int solution(const char* str1, const char* str2) {
    if(strstr(str1, str2))
        return 1;
    
    return 2;
}