#include <stdio.h>
#include <stdlib.h>

char* solution(const char* str[], size_t str_len, int** spc, size_t spc_row, size_t spc_col) {
    char* res = (char*)malloc((str_len * spc_row * spc_col + 1) * sizeof(char));
    int rdx = 0;
    
    for(int sdx = 0; sdx < str_len; sdx++)
        for(int pdx = spc[sdx][0]; pdx <= spc[sdx][1]; pdx++)
            res[rdx++] = str[sdx][pdx];
    res[rdx] = '\0';
    
    return res;
}