#include <stdio.h>

#define COMP(x, y) ((x) > (y) ? 1 : (x) < (y) ? -1 : (x) == (y) ? 0 : 0)

int sum(int arr[], int len)
{
    int res = 0;
    
    for(int idx = 0; idx < len; idx++)
        res += arr[idx];
    
    return res;
}

int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
    if(arr1_len - arr2_len)
        return COMP(arr1_len, arr2_len);
    return COMP(sum(arr1, arr1_len), sum(arr2, arr2_len));
}