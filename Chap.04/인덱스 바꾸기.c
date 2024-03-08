#include <stdio.h>
#include <string.h>

char* solution(const char* my_string, int num1, int num2) {
    int str_len = strlen(my_string);
    
    char* answer = (char*)malloc((str_len + 1) * sizeof(char));
    if(answer == NULL)
        return NULL;
    
    strcpy(answer, my_string);
    char temp = answer[num1];
    answer[num1] = answer[num2];
    answer[num2] = temp;
    
    return answer;
}