#include <stdio.h>
#include <string.h>

int solution(const char* str1, const char* str2) {
    return strstr(str1, str2) ? 1 : 0;
}