#include <stdio.h>
#include <string.h>

int* solution(const char* strlist[], size_t strlist_len) {
    int* answer = (int*)malloc(strlist_len * sizeof(int));
    int index = -1;
    
    while(++index < strlist_len)
        answer[index] = strlen(strlist[index]);
    
    return answer;
}