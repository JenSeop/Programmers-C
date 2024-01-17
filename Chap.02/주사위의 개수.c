#include <stdio.h>

int solution(int box[], size_t box_len, int n) {
    return (box[0]/n) * (box[1]/n) * (box[2]/n);
}