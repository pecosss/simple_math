/** \file simple_math.h
    \brief example of header
    \author Alessio Pecorari
*/

// necessario per evitare che il pre-processore crei doppioni di definizioni
#ifndef _SIMPLEMATH_
    #define _SIMPLEMATH_

    // struct: una semplificazione di oggetto
    typedef struct complex_number
    {
        float Re;
        float Im;
    } complex;

    // sum: input (2 integers) - output (1 integer)
    int sum(int x, int y);

    // avg: input (2 integers) - output (1 integer)
    float avg(int x, int y);

    // sum_cmplx: input (2 complex numbers) - output (1 complex number)
    // in C è necessario definire le funzioni con nomi diversi, nonostante la differenza di tipo
    complex sum_cmplx(complex x, complex y);

    // avg_cmplx: input (2 complex numbers) - output (1 complex number)
    complex avg_cmplx(complex x, complex y);

#endif