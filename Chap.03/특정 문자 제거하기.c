#include <stdio.h>
#include <string.h>

char* solution(const char* my_string, const char* letter) {
    int length = strlen(my_string);
    char* answer = (char*)malloc((length-1) * sizeof(char));
    int i = -1;
    int j = -1;
    
    while(++i < length)
        if(my_string[i] != *letter)
            answer[++j] = my_string[i];
    answer[j + 1] = '\0';
    
    return answer;
}