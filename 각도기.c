#include <stdio.h>

int solution(int angle) {
    int calc = 180-angle;
    
    if (calc > 0)
    {
        if (calc < 90)
            return 3;
        else if (calc == 90)
            return 2;
        else
            return 1;
    }
    return 4;
}