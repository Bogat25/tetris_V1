#ifndef alma_print
#define alma_print

#include "defines.c"


int pr_tabla(int tabla[TABLA_MERET_X][TABLA_MERET_Y]){
    for (int i = 0; i < TABLA_MERET_X; i++)
    {
        for (int j = 0; j < TABLA_MERET_Y; j++)
        {
            printf("%d ",tabla[i][j]);
        }
        printf("\n");
    }
    
}

#endif