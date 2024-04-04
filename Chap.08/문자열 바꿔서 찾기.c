#include <stdio.h>
#include <string.h>

#define TRS(c) ((c) == 65 ? 66 : 65)

int solution(const char* str, const char* pat) {
    char *cpy = str;
    
    for(int idx = 0; cpy[idx]; idx++)
        cpy[idx] = TRS(cpy[idx]);
    
    return strstr(cpy, pat) ? 1 : 0;
}