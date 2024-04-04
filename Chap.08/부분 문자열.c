#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int solution(const char* str1, const char* str2) {
    return (bool)strstr(str2, str1);
}