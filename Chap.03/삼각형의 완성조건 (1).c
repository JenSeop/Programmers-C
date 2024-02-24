#include <stdio.h>

int solution(int sides[], size_t sides_len) {
    if(sides[0] + sides[1] > sides[2] &&
      sides[0] + sides[2] > sides[1] &&
      sides[1] + sides[2] > sides[0])
        return 1;
    return 2;
}