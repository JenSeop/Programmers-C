#include <stdio.h>

int solution(int num[], size_t len, int n) {
    for(int idx = 0; idx < len; idx++)
        if(num[idx] == n)
            return 1;
    return 0;
}