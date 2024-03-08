#include <stdio.h>

int* solution(int n) {
    int cnt = 0;
    int idx = 0;
    
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            cnt++;
    
    int* answer = (int*)malloc(cnt * sizeof(int));
    if(answer == NULL)
        return NULL;
    
    for(int i = 1; i <= n; i++)
        if(n % i == 0)
            answer[idx++] = i;
    
    return answer;
}