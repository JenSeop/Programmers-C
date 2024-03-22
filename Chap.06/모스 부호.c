#include <stdio.h>
#include <string.h>

char* cutter(const char* let, int st, int ed) {
    char* cut = (char*)malloc((ed + 1) * sizeof(char));
    
    strncpy(cut, let + st, ed);
    cut[ed] = NULL;
    
    return cut;
}

int find_ed(const char* let, int st)
{
    int idx = 1;
    
    let += st;
    while(let++)
    {
        if(*let == ' ')
            return idx;
        idx++;
    }
    
    return 0;
}

int match_morse(char* str)
{
    char* morse[] = {
        ".-","-...","-.-.","-..",".","..-.","--.","....","..",
        ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
        "...","-","..-","...-",".--","-..-","-.--","--.."
        };
    
    for(int idx = 0; idx < 26; idx++)
        if(!strcmp(morse[idx], str))
            return idx + 97;
    
    return 0;
}

char* solution(const char* let) {
    char* res = (char*)malloc(strlen(let) * sizeof(char));
    int idx = -1;
    
    for(int st = 0; st < strlen(let); st += find_ed(let, st) + 1)
        res[++idx] = match_morse(cutter(let, st, find_ed(let, st)));
    res[++idx] = NULL;
    
    return res;
}