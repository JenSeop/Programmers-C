#include <stdio.h>

int solution(int dot[], size_t dot_len) {
    if(dot[1] > 0)
    {
        if(dot[0] > 0)
            return 1;
        return 2;
    }
    else
        if(dot[0] > 0)
            return 4;
    return 3;
}