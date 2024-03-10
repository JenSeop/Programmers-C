#include <stdio.h>
#include <string.h>

int solution(const char* str) {
    int res = 0;
    int idx = -1;
    int num = 0;
    int sign = 1;
    
    while(++idx < strlen(str))
    {
        if(str[idx] == '-' && sign > 0)
            sign *= -1;
        if(str[idx] == '+' && sign < 0)
            sign *= -1;
        if(str[idx] >= '0' && str[idx] <= '9')
            num = (num + str[idx] - '0') * 10;
        if(str[idx + 1] == ' ' || str[idx + 1] == NULL)
        {
            res = res + sign * (num / 10);
            num = 0;
        }
    }
    
    return res;
}