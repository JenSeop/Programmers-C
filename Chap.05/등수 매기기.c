#include <stdio.h>

int avg(int** score, int row)
{
    return score[row][0] + score[row][1];
}

int* solution(int** score, size_t row, size_t col) {
    int* res = (int*)malloc(row * sizeof(int));
    
    for(int i = 0; i < row; i++)
    {
        int now = avg(score, i);
        
        res[i] = 1;
        for(int j = 0; j < row; j++)
            if(now < avg(score, j))
                res[i]++;
    }
        
    return res;
}