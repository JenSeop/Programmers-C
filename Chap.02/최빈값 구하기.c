#include <stdio.h>

int solution(int array[], size_t array_len) {
    int cnt[1000] = {0};
    int max = 0;
    int res = -1;

    for (size_t i = 0; i < array_len; i++) {
        cnt[array[i]]++;
    }

    for (int i = 0; i < 1000; i++) {
        if (cnt[i] > max) {
            max = cnt[i];
            res = i;
        } else if (cnt[i] == max && max != 0) {
            res = -1;
        }
    }

    return res;
}