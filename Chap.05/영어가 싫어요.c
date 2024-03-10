#include <stdio.h>
#include <string.h>

int str_to_int(char* numbers, int idx)
{
    if(numbers[idx] == 'z')
        return 0;
    if(numbers[idx] == 'o')
        return 1;
    if(numbers[idx] == 't')
    {
        if(numbers[idx + 1] == 'w')
            return 2;
        return 3;
    }
    if(numbers[idx] == 'f')
    {
        if(numbers[idx + 1] == 'o')
            return 4;
        return 5;
    }
    if(numbers[idx] == 's')
    {
        if(numbers[idx + 1] == 'i')
            return 6;
        return 7;
    }
    if(numbers[idx] == 'e')
        return 8;
    if(numbers[idx] == 'n')
        return 9;
    
    return -1;
}

int str_int_spc(int n)
{
    if(n == 1 || n == 2 || n == 6)
        return 3;
    if(n == 0 || n == 4 || n == 5 || n == 9)
        return 4;
    
    return 5;
}

long long solution(const char* numbers) {
    long long res = 0;
    int idx = -1;
    
    while(numbers[++idx])
        {
            int num = str_to_int(numbers, idx);
            idx = idx + str_int_spc(num) - 1;
            res = res * 10 + num;
        }
    
    return res;
}