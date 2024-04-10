#include <stdio.h>

int solution(int d1[], size_t d1_l, int d2[], size_t d2_l) {
    return (d1[0] < d2[0]) || (d1[0] == d2[0]) && (d1[1] < d2[1]) || (d1[1] == d2[1]) && (d1[2] < d2[2] ? 1 : 0);
}