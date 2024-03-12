#include <stdio.h>
#include <string.h>

int solution(const char* my_string) {
    int res = 0;
    int num = 0;
    
    for(int i = 0; i < strlen(my_string) + 1; i++)
    {
        if(my_string[i] >= '0' && my_string[i] <= '9')
        {
            num += (my_string[i] - 48);
            num *= 10;
        }
        else
        {
            res += num / 10;
            num = 0;
        }
    }
    
    return res;
}