#include <stdio.h>
#include <string.h>

char* solution(const char* my_string) {
    int string_len = strlen(my_string);
    int index = -1;
    
    char* answer = (char*)malloc((string_len + 1) * sizeof(char));
    if (answer == NULL)
        return NULL;
    
    while(++index < string_len)
    {
        if(my_string[index] >= 'A' && my_string[index] <= 'Z')
            answer[index] = my_string[index] + 32;
        else
            answer[index] = my_string[index] - 32;
    }
    answer[index + 1] = '\0';
        
    return answer;
}