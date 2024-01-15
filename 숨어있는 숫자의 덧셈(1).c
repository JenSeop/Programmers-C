#include <stdio.h>

int solution(const char* my_string) {
    int i=-1;
    int res=0;
    
    while(my_string[++i])
        if(my_string[i] >= 48 && my_string[i] <= 57)
            res+=my_string[i]-48;
    
    return res;
}