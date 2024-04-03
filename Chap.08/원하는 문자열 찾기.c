#include <stdio.h>

#define alp(c) ((c) < 91 ? (c + 32) : (c))

int solution(const char* str, const char* pat) {
    int flg = 0;
    
    for(int idx = 0; idx < strlen(str); idx++)
    {
        if(alp(str[idx]) == alp(pat[flg]))
            flg++;
        else
            flg = 0;
        if(flg == strlen(pat))
            return 1;
    }       
    return 0;
}