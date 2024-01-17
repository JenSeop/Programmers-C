#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int *res = (int*)malloc(2 * sizeof(int));
    int mom = denom1 * denom2;
    int son = numer1 * (mom/denom1) + numer2 * (mom/denom2);
    int div = gcd(son, mom);
    
    res[0] = son/div;
    res[1] = mom/div;
            
    return res;
}