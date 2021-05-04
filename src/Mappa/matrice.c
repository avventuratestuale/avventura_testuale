#include <stdio.h>
#include <stdlib.h>
#include "matrice.h"

int leggere_colonna(matrice matrice_a)
{
  return matrice_a.colonne;
}

int leggere_riga(matrice matrice_a)
{
  return matrice_a.righe;
}

int leggere_valore(matrice matrice_a,int riga,int colonna)
{
  return  *(*(matrice_a.valori + riga) + colonna);
}

void scrivere_colonna(matrice *matrice_a,int num_colonne)
{
  matrice_a->colonne = num_colonne;
  return;
}

void scrivere_riga(matrice *matrice_a,int num_righe)
{
  matrice_a->righe = num_righe;
  return;
}

void scrivere_valore(matrice *matrice_a,int riga,int colonna,int valore)
{
  *(*(matrice_a->valori + riga) + colonna) = valore;
  return;
}

void stampare_matrice(matrice matrice_a)
{
	int i;
	int j;
	i=0;
	while (i<leggere_riga(matrice_a))
  {
		j=0;
		printf("[");
		while (j<leggere_colonna(matrice_a) -1)
    {
      if (leggere_valore(matrice_a, i, j) < 10)
      {
        printf(" ");
      }
			printf("%d, ",leggere_valore(matrice_a, i, j));
			j++;
	  }
     if (leggere_valore(matrice_a, i, j) < 10)
      {
        printf(" ");
      }
		printf("%d]\n",leggere_valore(matrice_a, i, j));
		i++;
	}
	return;
}

void allocare_matrice(matrice *matrice_a)
{
	int i;

	matrice_a->valori = malloc ( leggere_riga(*matrice_a) * sizeof(int*));
	i=0;

	while(i<leggere_riga(*matrice_a))
  {
	  *(matrice_a->valori+i) = malloc (leggere_colonna(*matrice_a)*sizeof(int));
		i++;
	}
	return;
}
