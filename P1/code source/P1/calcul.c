#include "calcul.h"

//functie care calculeaza numarul de pagini
long calcul_nr_pagini(long nr_cifre)
{
    long cif_nr_pag, nr_pag_pt_fiecare_nr_cif, pag_carte, nr_ramas_de_cif;
    cif_nr_pag=1;
    nr_pag_pt_fiecare_nr_cif=9;
    nr_ramas_de_cif=nr_cifre;
    pag_carte=0;
    while(nr_ramas_de_cif>=cif_nr_pag)
    {
       if(nr_ramas_de_cif>nr_pag_pt_fiecare_nr_cif*cif_nr_pag)//atata timp cat sunt destule cifre ramase cat sa reprezinte nr maxim de pagini ce poate fi reprezentat
       {
           pag_carte=pag_carte+nr_pag_pt_fiecare_nr_cif;// se aduna numarul paginilor
           nr_ramas_de_cif=nr_ramas_de_cif-cif_nr_pag*nr_pag_pt_fiecare_nr_cif;//determinarea numarului ramas de cifre
           nr_pag_pt_fiecare_nr_cif=nr_pag_pt_fiecare_nr_cif*10;//inmultirea numarului de pagini cu 1, 2, ..., n cifre cu 10 deoarece este 9, 90, ..
           cif_nr_pag++;//cresterea numarului de cifre utilizare pentru a numerota o pagina
       }
       else// daca nu
       {
           nr_pag_pt_fiecare_nr_cif=nr_ramas_de_cif/cif_nr_pag;// se imparte numarul ramas de cifre la numarul de cifre care este necesar pt a reprezenta paginile
           pag_carte=pag_carte+nr_pag_pt_fiecare_nr_cif;// se aduna numarul de pagini ce mai potfi reprezentate si se adauga la restul
           break;
       }

    }
    return pag_carte;
}

