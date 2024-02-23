#include <stdio.h>
#include <string.h>

char* solution(const char* my_string) {
    int str_length = strlen(my_string);
    char* answer = (char*)malloc(str_length*sizeof(char));
    int index = -1;
    
    while(++index < str_length)
        answer[index] = my_string[str_length-index-1];
    answer[index] = '\0';
    
    return answer;
}