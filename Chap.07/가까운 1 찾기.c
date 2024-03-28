#include <stdio.h>

int solution(int arr[], size_t len, int idx) {
    for (int i = 0; i < len; i++)
        if(arr[i] && i >= idx)
            return i;
    return -1;
}