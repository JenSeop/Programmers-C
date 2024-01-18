#include <stdio.h>

int solution(int num, int k) {
    int arr[7] = {-1};
    int org = num;
    int len = 1;
    int i = -1;
    
    while(num/=10)
        len++;
    
    while(++i < len)
    {
        arr[i] = org % 10;
        org /= 10;
    }
    
    i = len;
    while(--i > -1)
        if(arr[i] == k)
            return len - i;
    
    return -1;
}