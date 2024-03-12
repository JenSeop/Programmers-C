#include <stdio.h>

int solution(int** dot, size_t row, size_t col) {
    int sqr[100][100] = {0, };
    int res = 0;
    
    for(int y = 0; y < row; y++)
        for(int x = 0; x < col; x++)
        {
            if(dot[x][y] == 1)
            {
                sqr[x][y] = 1;
                if(x > 0)
                    sqr[x - 1][y] = 1;
                if(x < col - 1)
                    sqr[x + 1][y] = 1;
                if(y > 0)
                    sqr[x][y - 1] = 1;
                if(y < row - 1)
                    sqr[x][y + 1] = 1;
                if(x > 0 && y > 0)
                    sqr[x - 1][y - 1] = 1;
                if(x < col - 1 && y > 0)
                    sqr[x + 1][y - 1] = 1;
                if(x > 0 && y < row - 1)
                    sqr[x - 1][y + 1] = 1;
                if(x < col - 1 && y < row - 1)
                    sqr[x + 1][y + 1] = 1;
            }
        }
    
    for(int y = 0; y < row; y++)
        for(int x = 0; x < col; x++)
            if(sqr[x][y])
                res++;
    
    return row * col - res;
}