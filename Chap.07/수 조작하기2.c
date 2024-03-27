#include <stdio.h>
#include <stdlib.h>

char* solution(int log[], size_t len) {
    char* res = (char*)malloc((len) * sizeof(char));
    int spc = 0;
    
    for (int idx = 1; idx < len; idx++)
    {
        int diff = log[idx] - log[idx - 1];
        switch(diff)
        {
            case -10: res[spc++] = 'a'; break;
            case -1: res[spc++] = 's'; break;
            case 1: res[spc++] = 'w'; break;
            case 10: res[spc++] = 'd'; break;
        }
    }
    res[spc] = NULL;
    
    return res;
}