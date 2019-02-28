#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
  int *scelte;
  int num_scelte; 
} Livello;

int princ_molt(int pos, Livello *val, int *sol, int n, int count);

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
