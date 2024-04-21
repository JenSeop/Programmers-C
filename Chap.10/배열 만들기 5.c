#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* str[], size_t str_len, int k, int s, int l) {
    int* res = (int*)malloc(str_len * sizeof(int));
    int rpc = 0;
    
    for(int spc = 0; spc < str_len; spc++)
    {
        char* sub_str = str[spc];
        for(int idx = 0; idx < s; idx++)
            sub_str++;
        sub_str[l] = NULL;
        int num = atoi(sub_str);
        if(num > k)
            res[rpc++] = num;
    }
    
    return res;
}