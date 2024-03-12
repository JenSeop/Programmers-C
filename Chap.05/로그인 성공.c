#include <stdio.h>
#include <string.h>

char* solution(const char* id_pw[], size_t id_pw_len, const char*** db, size_t db_rows, size_t db_cols) {
    int flg = 0;
    
    for(int i = 0; i < db_rows; i++)
        if(!strcmp(id_pw[0], db[i][0]))
        {
            flg = 1;
            if(!strcmp(id_pw[1], db[i][1]))
                flg = 2;
        }
    
    char* res = (char*)malloc(9 * sizeof(char));
    
    if(flg == 0)
        strcpy(res, "fail\0");
    if(flg == 1)
        strcpy(res, "wrong pw\0");
    if(flg == 2)
        strcpy(res, "login\0");
    
    return res;
}