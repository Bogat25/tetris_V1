#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

#include "defines.c"
#include "print.c"
#include "scan.c"
#include "blueprints.c"

int main()
{
    int tabla[TABLA_MERET_X][TABLA_MERET_Y] = {0};
    int Jatekban = 1;
    
    while (Jatekban == 1)
    {
        int input = sc_input();
        if (input == 0)
        {
            pr_kilepes();
            return 0;
        }
        pr_iranyitas(); printf("\n");

        pr_tabla(tabla);
    }
}

//srand((unsigned int)time(NULL));