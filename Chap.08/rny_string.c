#include <stdio.h>
#include <stdlib.h>

int m_counter(char* str)
{
    int cnt = 0;
    
    for(int idx = 0; idx < strlen(str); idx++)
        if(str[idx] == 'm')
            cnt++;
    
    return cnt;
}

char* solution(const char* str) {
    char* res = (char*)malloc((strlen(str) + m_counter(str) + 1) * sizeof(char));
    int spc = 0;
    
    for(int idx = 0; idx < strlen(str); idx++)
    {
        if(str[idx] == 'm')
        {
            res[idx + spc] = 'r';
            res[idx + spc + 1] = 'n';
            spc++;
        }
        else
            res[idx + spc] = str[idx];
    }
    res[strlen(str) + m_counter(str)] = NULL;
        
    return res;
}