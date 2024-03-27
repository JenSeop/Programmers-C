#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QR(q, r, c) ((c) % (q) == (r))

char* solution(int q, int r, const char* code) {
    char* res = (char*)malloc((strlen(code) + 1) * sizeof(char));
    int rdx = 0;
    
    for(int idx = 0; idx < strlen(code); idx++)
        if(QR(q, r, idx))
            res[rdx++] = code[idx];
    res[rdx] = NULL;
    
    return res;
}