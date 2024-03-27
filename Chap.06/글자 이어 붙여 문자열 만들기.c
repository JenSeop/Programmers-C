#include <stdio.h>

char* solution(const char* str, int idx_lst[], size_t idx_lst_len) {
    char* res = (char*)malloc((idx_lst_len + 1) * sizeof(char));
    
    for(int idx = 0; idx < idx_lst_len; idx++)
        res[idx] = str[idx_lst[idx]];
    res[idx_lst_len] = NULL;
    
    return res;
}