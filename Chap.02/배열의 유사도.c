#include <stdio.h>
#include <string.h>

int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len) {
    int s1_i = -1;
    int s2_i = -1;
    int cnt = 0;
    
    while(++s1_i < s1_len)
    {
        s2_i = -1;
        while(++s2_i < s2_len)
            if(!strcmp(s1[s1_i], s2[s2_i]))
            {
                cnt++;
                break;
            }
    }
    
    return cnt;
}