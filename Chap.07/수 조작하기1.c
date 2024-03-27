#include <stdio.h>

#define CONTROL(x) ((x == 'w') ? 1 : (x == 's') ? -1 : (x == 'd') ? 10 : (x == 'a') ? -10 : 0)

int solution(int n, const char* control) {
    for(int idx = 0; idx < strlen(control); idx++)
        n += CONTROL(control[idx]);
    return n;
}