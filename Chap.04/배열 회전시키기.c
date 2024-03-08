#include <stdio.h>
#include <string.h>

int* solution(int numbers[], size_t numbers_len, const char* direction) {
    int* answer = (int*)malloc(numbers_len * sizeof(int));
    if(answer == NULL)
        return NULL;
    
    if(!strcmp(direction, "right"))
    {
        for(int i = 1; i < numbers_len; i++)
            answer[i] = numbers[i - 1];
        answer[0] = numbers[numbers_len - 1];
    }
    else
    {
        for(int i = 0; i < numbers_len - 1; i++)
            answer[i] = numbers[i + 1];
        answer[numbers_len - 1] = numbers[0];
    }
    
    return answer;
}