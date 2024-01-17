#include <stdio.h>
#include <string.h>

char* solution(const char* my_string, int n) {
    char* res=(char*)malloc(strlen(my_string)*n+1);
    int len=strlen(my_string);
    int k=0;
    
    for(int i=0; i<len; i++)
        for(int j=0; j<n; j++)
            res[k++]=my_string[i];
    
    res[k]='\0';
    
    return res;
}