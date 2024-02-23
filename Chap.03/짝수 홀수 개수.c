#include <stdio.h>

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(2 * sizeof(int));
    int index = -1;
    
    answer[0] = 0;
    answer[0] = 1;
    
    while(++index < num_list_len)
        if(num_list[index] % 2 == 0)
            answer[0] = answer[0] + 1;
    
    answer[0] = answer[0] - 1;
    
    if(answer[0])
        answer[1] = num_list_len - answer[0];
    else
        answer[1] = num_list_len;
    
    return answer;
}