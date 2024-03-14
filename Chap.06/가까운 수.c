#include <stdio.h>
#include <stdlib.h>

int solution(int arr[], size_t len, int n) {
    int res = arr[0];
    int min_diff = abs(arr[0] - n);
    
    for (int i = 1; i < len; i++)
    {
        int diff = abs(arr[i] - n);
        if(diff < min_diff || (diff == min_diff && arr[i] < res))
        {
            res = arr[i];
            min_diff = diff;
        }
    }
    
    return res;
}