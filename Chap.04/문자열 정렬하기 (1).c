#include <stdio.h>
#include <string.h>

int* solution(const char* my_string) {
    int str_len = strlen(my_string);
    int num_len = 0;
    int idx = -1;
    
    for(int i = 0; i < str_len; i++)
        if(my_string[i] >= '0' && my_string[i] <= '9')
            num_len++;
    
    int* answer = (int*)malloc(num_len * sizeof(int));
    if(answer == NULL)
        return NULL;
    
    for(int i = 0; i < str_len; i++)
        if(my_string[i] >= '0' && my_string[i] <= '9')
            answer[++idx] = my_string[i] - 48;
    
    for(int i = 0; i < num_len; i++)
        for(int j = 0; j < num_len; j++)
            if(answer[i] < answer[j])
            {
                char temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
    
    return answer;
}