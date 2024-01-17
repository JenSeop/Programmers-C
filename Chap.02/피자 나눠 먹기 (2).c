#include <stdio.h>

int solution(int n) {
    int pizza = 0;
    
    while(++pizza)
        if((6*pizza)%n==0)
            return pizza;
}