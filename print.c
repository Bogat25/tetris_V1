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
void pr_kilepes(){
    printf(YELLOW_TEXT"Koszonom hogy a jatekommal jatszott.\n");
    printf(CYAN_TEXT"Keszitette: Csani#3902");printf(RESET_TEXT);
}
void pr_bevezeto(){
printf(YELLOW_TEXT "Az iranyitas.\n");
        printf(CYAN_TEXT "Balra : ");printf(YELLOW_TEXT " a\n");
        printf(CYAN_TEXT "Jobbra: ");printf(YELLOW_TEXT " d\n");
        printf(CYAN_TEXT "Iranytvalt: ");printf(YELLOW_TEXT " w\n");
        printf(RESET_TEXT);
}
#endif