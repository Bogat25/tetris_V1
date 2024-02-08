#ifndef alma_scan
#define alma_scan
#include "defines.c"


int sc_input()
{
    int input = -1;
    while (input < 0 || input > 1)
    {
        printf(YELLOW_TEXT "Kerlek valassz a lehetosegek kozul.\n");
        printf(RED_TEXT "Kilepes: 0 ");
        printf(GREEN_TEXT "Jatek elkezdese: 1\n");
        printf(RESET_TEXT);
        while (scanf("%d", &input) != 1)
        {
            printf(RED_TEXT "Hibas bemenet.\n");
            printf(RESET_TEXT);
            while (getchar() != '\n')
                ;
        }
    }

    return input;
}
#endif