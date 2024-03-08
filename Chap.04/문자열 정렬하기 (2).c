#include <stdio.h>
#include <string.h>

char* solution(const char* my_string) {
    int str_len = strlen(my_string);
    char* answer = (char*)malloc((str_len + 1) * sizeof(char));
    if(answer == NULL)
        return NULL;
    answer[str_len] = '\0';
    
    for(int i = 0; i < str_len; i++)
    {
        answer[i] = my_string[i];
        if(my_string[i] >= 'A' && my_string[i] <= 'Z')
            answer[i] = my_string[i] + 32;
    }
    
    for(int i = 0; i < str_len; i++)
        for(int j = 0; j < str_len; j++)
            if(answer[i] < answer[j])
            {
                char temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
    
    return answer;
}