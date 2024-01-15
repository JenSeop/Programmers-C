#include <stdio.h>

int solution(int n) {
    int i=0;
    int res=0;
    
    // 순서쌍 = 약수
    while(i++<=n)
        if(!(n%i))
            res++;
    
    return res;
}