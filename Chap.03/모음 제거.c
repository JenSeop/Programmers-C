#include <stdio.h>
#include <string.h>

int is_aeiou(char alpha)
{
    if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
        return 1;
    return 0;
}

char* solution(const char* my_string) {
    int length = strlen(my_string);
    char* answer = (char*)malloc(length * sizeof(char));
    int space = -1;
    int index = -1;
    
    while(++index < length + 1)
        if(!is_aeiou(my_string[index]))
            answer[++space] = my_string[index];
    answer[space] = '\0';
    
    return answer;
}