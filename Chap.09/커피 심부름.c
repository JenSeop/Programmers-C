#include <stdio.h>
#include <string.h>

#define AME(n) ((n) ? 4500 : 0)
#define CAF(n) ((n) ? 5000 : 0)

int solution(const char* order[], size_t order_len) {
    int res = 0;
    
    for(int idx = 0; idx < order_len; idx++)
        res += AME(strstr(order[idx], "ame")) + CAF(strstr(order[idx], "caf")) + AME(strstr(order[idx], "any"));
    
    return res;
}