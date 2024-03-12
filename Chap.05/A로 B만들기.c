#include <stdio.h>
#include <string.h>

int solution(const char* before, const char* after) {
    int bef[26] = {0, };
    int aft[26] = {0, };
    
    for(int i = 0; i < strlen(before); i++)
    {
        bef[before[i] - 97]++;
        aft[after[i] - 97]++;
    }
    
    for(int i = 0; i < 26; i++)
        if(bef[i] != aft[i])
            return 0;
    
    return 1;
}