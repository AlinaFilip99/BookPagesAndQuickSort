#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "vectors.h"
//#include "utils.h"

int main()
{
    unsigned i, n, k, j, ok=0;
    time_t t;

    srand((unsigned) time(&t));
    for(k=1; k<=10; k++)
    {
       printf("\ntestul nr %d\n", k);

        n=rand()%10;//functia rand ii da o valoare la intamplare lu n, valoare cuprinsa intre 0 si 10;

        if(n%2!=0)
        {
            n++;
        }
        int A[n];
        //int maxime[n-1];//deoarece exista n-1 combinatii ale vectoruui vor exista n-1 maxime ale fiecarei combinatii

        for(i=0; i<n; i++)
        {
            A[i]=rand()%100;//fiecare valoare din vector primeste o valoare la intamplare cuprinsa in intervalul 0..(i+1)*1000;
        }
         for(i=0; i<n; i++)
            for(j=0;j<n;j++)
         {
             if((A[i]==A[j])&&(i!=j))
             {
                 ok=1;
             }
         }

        if(n==0)
        {
            printf("dimensiunea sirului este 0, nu se poate forma nici o pereche");
        }
        else if (n==2)
        {
            printf(" pentru sirul %d, %d partitionarea cu suma minima dintre sumele maxime este: (%d, %d)", A[0], A[1], A[0], A[1]);
        }
        else if (ok==0)
        {
            quick_sort(A,0,n-1);//apelul lui quick_sort
            write(A, n);
            //determinare_vector_sume_max(A, n-1, maxime);
            //interschimbari=det_pozitie_minimul_maximelor(maxime, n-1);
            partitionare_perechi(A,n-2);
            afisare_partitionare(A,n-1);
        }
        else if (ok==1){
            printf("programul functioneaza doar daca variabilele sunt diferite");
        }
    }
    return 0;
}
