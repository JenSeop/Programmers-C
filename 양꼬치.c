#include <stdio.h>

int solution(int n, int k) {
    int bill = n * 12000 + k * 2000;
    
    if(n/10>=1)
        return bill - (int)(n/10)*2000;
    
    return bill;
}