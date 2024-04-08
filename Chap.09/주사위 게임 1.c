#include <stdio.h>
#include <stdlib.h>

#define POW(a, b) ((a) * (a) + (b) * (b))

int solution(int a, int b) {
    if(a % 2 && b % 2)
        return POW(a, b);
    if((a % 2 && b % 2 == 0) || (a % 2 == 0 && b % 2))
        return 2 * (a + b);
    return abs(a - b);
}