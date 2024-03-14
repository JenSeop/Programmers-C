#include <stdio.h>

int solution(int balls, int share) {
    if (share == 0 || balls == share)
        return 1;
    else
        return solution(balls - 1, share - 1) + solution(balls - 1, share);
}