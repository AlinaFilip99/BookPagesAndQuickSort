#include <stdio.h>
#include <stdlib.h>
#include "calcul.h"
#include "print.h"

int main()
{
    long pag_carte;
    long  unsigned nr_cifre;
    int i, n, k;
    time_t t;
    n=10;
    srand((unsigned) time(&t));


    for( i = 0 ; i < n ; i++ )
    {
        printf("\ntestul numarul %d\n", i+1);
        nr_cifre=rand()%((i+1)*10000);
        if(nr_cifre==0)
        {
            printf("pentru numarul de 0 cifre, numarul de pagini este 0\n");
        }
        else if((nr_cifre>0)&&(nr_cifre<10))
        {
            printf("pentru numarul de %ld cifre, numarul de pagini este %ld\n", nr_cifre, nr_cifre);
        }
        else
            {
        printf("pentru numarul de %ld cifre,", nr_cifre);
        pag_carte=calcul_nr_pagini(nr_cifre);
        printeaza(pag_carte);
            }
    }

    return 0;
}
