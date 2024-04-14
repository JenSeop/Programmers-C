#include <stdio.h>
#include <string.h>

int solution(const char* str, const char* pat) {
    int res = 0;
    
    for(int idx = 0; str[idx]; idx++)
    {
        int pdx = 0;
        if(str[idx] == pat[0])
            for(pdx; pat[pdx]; pdx++)
                if(str[idx + pdx] != pat[pdx])
                    break;
        if(pdx == strlen(pat))
            res++;
    }
    
    return res;
}