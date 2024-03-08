#include <stdio.h>
#include <string.h>

char* solution(const char* cipher, int code) {
    int cipher_len = strlen(cipher);
    int cipher_idx = code - 1;
    int index = -1;
    
    char* answer = (char*)malloc((cipher_len / code + 1) * sizeof(char));
    if (answer == NULL)
        return NULL;
    
    while(cipher_idx < cipher_len)
    {
        answer[++index] = cipher[cipher_idx];
        cipher_idx += code;
    }
    answer[index + 1] = '\0';
    
    return answer;
}