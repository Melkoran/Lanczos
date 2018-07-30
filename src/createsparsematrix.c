//createsparsematrix
#include "lanczos.h"

void createsparsematrix(SparseMatrix *A, int m, int n, int *deg) {
     int i;
     A->deg = (int*)malloc(m * sizeof(int));         
     for(i=0; i<m; i++)
           A->deg[i] = deg[i];      
                   
     A->value = (double**)malloc(m * sizeof(double *));
     for (i=0; i<m; i++)
         A->value[i] = (double *)malloc(n * sizeof(double));
                   
     A->adj = (int**)malloc(m * sizeof(int *)); 
     for (i=0; i<m; i++)
         A->adj[i] = (int *)malloc(n * sizeof(int));        
     A->nrows = m;
     A->ncols = n;
}
