#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
  int *scelte;
  int num_scelte; 
} Livello;


void generaSoluzioni(Livello* vettore, int dimVettore); 
int princ_molt(int pos, Livello *val, int *sol, int n, int count);
void elaboraSoluzione(int dim, int* sol); 

void generaSoluzioni(Livello* vettore, int dimVettore)
{
  int* sol = malloc(dimVettore*sizeof(int)); 
  int indiceRicorsione = 0; 
  int Nsoluzioni = princ_molt(indiceRicorsione, vettore, sol, dimVettore, 0); 
}

int princ_molt(int pos, Livello *val, int *sol, int n, int count) 
{
  if (pos >= n) 
  {
    elaboraSoluzione(n, sol); 
    return count+1;
  }
  
  int i;
  for (i = 0; i < val[pos].num_scelte; i++) 
  {
    sol[pos] = val[pos].scelte[i];
    count = princ_molt(pos+1, val, sol, n, count);
  }
  return count;
}

void elaboraSoluzione(int dim, int* sol)
{
  int i; 
  for(i=0; i<dim; i++)
  {
    //sol[i], i-esimo elemento della soluzione
  }
}
