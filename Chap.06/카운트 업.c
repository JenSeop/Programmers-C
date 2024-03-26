#include <stdio.h>

int* solution(int s_num, int e_num) {
    int* res = (int*)malloc((e_num - s_num + 1) * sizeof(int));
    int idx = 0;
    
    for (s_num; s_num <= e_num; s_num++)
        res[idx++] = s_num;
    
    return res;
}