/** \file simple_math.c
    \brief testing math operations
    \author Alessio Pecorari
*/

#include <stdio.h>         // <> per includere librerie
#include "simple_math.h"   // "" per includere header nella cartella locale

int main(void){

    int n;
    int m;

    int s = sum(n,m);
    float mean = avg(n,m);

    printf("x = %d, y = %d\n\n", n, m);
    printf("Sum: %d\n", s);
    printf("Average: %.2f\n", mean);

    return 0;
}