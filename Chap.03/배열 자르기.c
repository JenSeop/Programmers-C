#include <stdio.h>

int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    int length = num2-num1+1;
    int* answer = (int*)malloc(length * sizeof(int));
    int index = -1;
    
    while(++index < length)
        answer[index] = numbers[index + num1];
    
    return answer;
}