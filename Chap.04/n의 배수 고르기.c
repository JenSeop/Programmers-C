#include <stdio.h>

int counter(int n, int numlist[], int numlist_len)
{
    int index = -1;
    int count = 0;
    
    while(++index < numlist_len)
        if(!(numlist[index] % n))
            count++;
    
    return count;
}

int* solution(int n, int numlist[], size_t numlist_len) {
    int* answer = (int*)malloc(counter(n, numlist, numlist_len) * sizeof(int));
    int index = -1;
    int space = -1;
    
    while(++index < numlist_len)
        if(!(numlist[index] % n))
            answer[++space] = numlist[index];
    
    return answer;
}