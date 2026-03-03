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

complex sum_cmplx(complex x, complex y){
    float sum_Re = x.Re + y.Re;
    float sum_Im = x.Im + y.Im;

    complex res;
    res.Re = sum_Re;
    res.Im = sum_Im;

    return res;
}

complex avg_cmplx(complex x, complex y){
    complex res = sum_cmplx(x, y);
    res.Re = res.Re / 2.0;
    res.Im = res.Im / 2.0;

    return res;
}