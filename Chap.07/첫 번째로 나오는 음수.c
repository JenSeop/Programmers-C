#include <stdio.h>

int solution(int num[], size_t len) {
    for(int idx = 0; idx < len; idx++)
        if(num[idx] < 0)
            return idx;
    return -1;
}