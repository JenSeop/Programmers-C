#include <stdio.h>

char* solution(int age) {
    int length = 0;
    int temp = age;
    int idx = -1;
    
    while(temp)
    {
        temp /= 10;
        length++;
    }
    
    char* answer = (char*)malloc((length + 1) * sizeof(char));
    if(answer == NULL)
        return NULL;
    
    while(++idx < length)
    {
        answer[idx] = age % 10 + 97;
        age /= 10;
    }
    answer[idx] = '\0';
    
    for (int i = 0; i < length / 2; i++)
    {
        int temp = answer[i];
        answer[i] = answer[length - i - 1];
        answer[length - i - 1] = temp;
    }
    
    return answer;
}