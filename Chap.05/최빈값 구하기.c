#include <stdio.h>

int idx_cnt(int n, int array[], size_t array_len)
{
    int idx = -1;
    int cnt = 0;
    
    while(++idx < array_len)
        if(n == array[idx])
            cnt++;
    
    return cnt;
}

int solution(int array[], size_t array_len) {
    int cnt[101] = {0, };
    int res = 0;
    int max = 0;
    int max_idx = 0;
    
    if(array_len == 1)
        return array[0];
    
    for(int i = 1; i < array_len; i++)
    {
        cnt[i] = idx_cnt(i, array, array_len);
        if(max < cnt[i])
        {
            max = cnt[i];
            res = i;
        }
    }
    
    for(int i = 1; i < array_len; i++)
        if(max == cnt[i] && res != i)
            return -1;
    
    return res;
}