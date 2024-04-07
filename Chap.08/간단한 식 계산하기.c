#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIG(c) (((c) == '+' || (c) == '-' || (c) == '*') ? 1 : 0)
#define STP(c) ((c) == '+' ? 1 : (c) == '-' ? -1 : (c) == '*' ? 0 : 0)

int sig_find(char* str)
{
    for(int idx = 0; str[idx]; idx++)
        if(SIG(str[idx]))
            return idx;
    return 0;
}

int solution(const char* str) {
    int sig_spc = sig_find(str);
    int sig_flg = STP(str[sig_spc]);
    char* left[sig_spc];
    char* right[sig_spc];
    
    strncpy(left, str, sig_spc);
    left[sig_spc - 1] = NULL;
    strncpy(right, str + sig_spc + 2, strlen(str));
    right[sig_spc - 1] = NULL;
    
    if(sig_flg)
        return atoi(left) + atoi(right) * sig_flg;
    else
        return atoi(left) * atoi(right);
    return 0;
}