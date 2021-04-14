
#include "vectors.h"

//scrierea sirului de numere dupa sortare
void write(int A[], int n)
{
    int i;
    printf("pentru sirul: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
}

/* partitionarea vectorului in funtie de pivot
 dupa terminarea executiei functiei secventa se va imparti in 2 parti
 prima parte va contine elemente mai mici decat pivotul
 a doua parte va contine elemente mai mari decat pivotul
funtia returneaza pozitia lui j atunci cand nu se mai indeplineste cinditia i<j*/
int partition_vector(int A[], int p, int r)
{
    int x, i, j, aux;
    x=A[p];//pivot
    i=p;//primul element din secventa
    j=r;//ultimul elem din secventa
    while(i<j)
    {
        while(A[i]<x)
        {
            i++;
        }
        while(A[j]>x)
        {
            j--;
        }
        if(i<j)
        {
            aux=A[i];
            A[i]=A[j];
            A[j]=aux;
        }
        else
        {
            return j;
        }
    }
}
/* organizarea elementelor din sir dupa cum ar trebui sa fie
pozitia lor astfel incat suma maxima sa fie minima dintre cele posibile*/
void partitionare_perechi(int A[], int j)
{
    int i, aux;
    for(i=2; i<=j+1; i++)
    {
        aux=A[1];
        A[1]=A[i];
        A[i]=aux;
    }

}
// afisarea vectorului pe perechi
void afisare_partitionare(int A[], int n)
{
    int i, j;
    printf("partitionarea cu suma minima dintre sumele maxime este:");
    i=0;
    while(i<=n)
    {
        j=i+1;
        printf("(%d,%d); ", A[i], A[j]);
        i=i+2;
    }
}
