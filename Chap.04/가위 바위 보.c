#include <stdio.h>
#include <string.h>

int analyzer(int n)
{
    if(n == '2')
        return '0';
    if(n == '0')
        return '5';
    
    return '2';
}

char* solution(const char* rsp) {
    int rsp_len = strlen(rsp);
    char* answer = (char*)malloc(rsp_len * sizeof(char));
    int i = -1;
    
    while(++i < rsp_len)
        answer[i] = analyzer(rsp[i]);
    answer[i] = '\0';
    
    return answer;
}