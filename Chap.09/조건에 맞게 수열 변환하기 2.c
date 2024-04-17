#include <stdio.h>

#define CAL(n) ((n) >= 50 ? ((n) % 2 == 0 ? (n / 2) : (n)) : ((n) % 2 ? (n * 2 + 1) : (n)))

int solution(int arr[], size_t arr_len) {
    int res = 0;
    
    while(1)
    {
        int bef = 0, aft = 0;
        for(int idx = 0; idx < arr_len; idx++)
        {
            bef += arr[idx];
            arr[idx] = CAL(arr[idx]);
            aft += arr[idx];
        }
        if ((bef - aft) == 0) break;
        res++;
    }
    
    return res;
}