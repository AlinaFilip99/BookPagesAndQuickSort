
#include "utils.h"

//determinarea vectorului care contine sumele maxime ale tuturor combinatiilor de perechi
void determinare_vector_sume_max(int A[], int n, int maxime[])
{
    int k, m, i=0, aux, pozitie_elem[n];
    for(i=0;i<n+1;i++)
    {
        pozitie_elem[i]=i;
    }
    k=2;
    maxime[0]=suma_max(A, n, pozitie_elem);
    while(k!=n+1)
    {
        aux=pozitie_elem[1];
        pozitie_elem[1]=pozitie_elem[k];//acest vector "amesteca" elementele din vectorul initial fara a modifica pozitia lor defapt
        pozitie_elem[k]=aux;
        maxime[k-1]=suma_max(A, n, pozitie_elem);
        k++;
    }

}

//subprogram care returneaza suma maxima a unei combinatii
int suma_max(int A[], int n, int pozitie_elem[])
{

    int i, j, m=0, suma[(n+1)/2], maxim;
    for(i=0; i<n; i++)
    {
        j=i+1;
        suma[m]=A[pozitie_elem[i]]+A[pozitie_elem[j]];//vector care cntine toate sumele perechilor din combinatia de perechi
        m++;
        i++;
    }
    maxim=suma[0];
    i=0;
    while(i<m)
    {
        if(suma[i]>maxim)
        {
            maxim=suma[i];//determinarea maximului vectorului suma
        }
        i++;
    }
    return maxim;
}

//subprogram care returneaza a cata combinatie este cea care contine suma maxima minima dinte combinatiile posibile
//defapt returneaza de cate ori trebuie sa interschimbam elementele in vector pt a obtine combinatia corecta
int det_pozitie_minimul_maximelor(int maxime[], int m)
{
    int minim, i, nr_interschimbari=0;
    minim=maxime[0];
    i=0;
     while(i<m)
    {

        if(maxime[i]<minim)
        {
            minim=maxime[i];
            nr_interschimbari=i;
        }
        i++;
    }
    return nr_interschimbari;
}
