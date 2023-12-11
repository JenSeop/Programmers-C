#include <stdio.h>

#define MIN -50000
#define MAX 50000

int solution(int num1, int num2) {
    if ((num1>=MIN && num1<=MAX)&&(num2>=MIN && num2<=MAX))
        return num1+num2;
}