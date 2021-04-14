
#include "sort.h"
#include "vectors.h"

/*sortarea secventei de numere
functia se reapeleaza de 2 ori
o data pentru a organiza elementeledin secventa pana la pozitia returnata de functia partition
si a doua oara pentru a sorta elementele de dupa pozitia returnata de functia partition*/
void quick_sort(int A[], int p, int r)
{
    int q;
    if(p<r)
    {
        q=partition_vector(A,p,r);
        quick_sort(A,p,q);
        quick_sort(A,q+1,r);
    }
}

