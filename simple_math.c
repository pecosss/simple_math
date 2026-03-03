/** \file simple_math.c
    \brief example of math operations
    \author Alessio Pecorari
*/

#include <stdio.h>         // <> per includere librerie
#include "simple_math.h"   // "" per includere header nella cartella locale

int sum(int x, int y){
    return (x+y);
}

float avg(int x, int y){
    return (sum(x,y)/2.0);
}

int main(void){

    printf("Sum: %d\n", sum(2, 4));

    return 0;
}

