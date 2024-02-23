#include <stdio.h>

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(num_list_len * sizeof(int));
    int length = num_list_len;
    
    while(num_list_len--)
        answer[length-num_list_len-1] = num_list[num_list_len];
    
    return answer;
}