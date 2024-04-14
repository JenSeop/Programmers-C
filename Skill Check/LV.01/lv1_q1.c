#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str) {
    char* res = (char*)malloc((strlen(str) + 1) * sizeof(char));
    int max = 0;
    
    strcpy(res, str);
    res[strlen(str)] = NULL;
    
    for(int idx = 0; idx < strlen(str); idx++)
        for(int jdx = 0; jdx < strlen(str); jdx++)
            if(res[idx] > res[jdx])
            {
                int temp = res[idx];
                res[idx] = res[jdx];
                res[jdx] = temp;
            }
    
    return res;
}