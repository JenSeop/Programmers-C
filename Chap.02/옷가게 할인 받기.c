#include <stdio.h>

int solution(int price) {
    if(price >= 100000)
    {
        if(price >= 500000)
            return price * 0.8;
        if(price >= 300000)
            return price * 0.9;
        
        return price * 0.95;    
    }
    
    return price;
}