#include <stdio.h>
#include <string.h>

int checker(char str[], char c)
{
    for(int idx = 0; idx < strlen(str); idx++)
        if(str[idx] == c)
            return 0;
    return 1;
}

char* solution(const char* my_string) {
    char* answer = (char*)malloc(strlen(my_string) * sizeof(char));
    int ans = -1;
    
    answer[++ans] = my_string[0];
    for(int idx = 1; idx < strlen(my_string) + 1; idx++)
    {
        if(checker(answer, my_string[idx]))
            answer[++ans] = my_string[idx];
        answer[ans + 1] = '\0';
    }
    answer[ans] = '\0';
    
    return answer;
}