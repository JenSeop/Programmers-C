#include <stdio.h>

int solution(int numbers[], size_t numbers_len) {
    int answer = numbers[0] * numbers[1];
    
    for (int i = 0; i < numbers_len; i++)
        for(int j = 0; j < numbers_len; j++)
            if(numbers[i] * numbers[j] > answer && i != j)
                answer = numbers[i] * numbers[j];
    
    return answer;
}