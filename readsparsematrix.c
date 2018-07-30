#include <stdio.h>
#include <stdlib.h>
#include "lanczos.h"

int readsparsematrix(char* filename, SparseMatrix *A)
{
  
    FILE* fp; 
    int m,n,kl,i,j, *deg;
    fp=fopen(filename,"r"); 
    
    if (fp==NULL) {
       fprintf(stderr, "Could not open file %s.\n", filename);
       return -1;
    } /* end if */

    fscanf(fp, "%d", &m); 
    fscanf(fp, "%d", &n); 
    deg=(int *)malloc(m*sizeof(int));
    for (i=0; i<m; i++)
        fscanf(fp, "%d", &(deg[i]));
    createsparsematrix(A, m,n, deg);    
    free(deg);
    
    for (i=0; i<A->nrows; i++) {
        for (j=0; j<A->deg[i]; j++) 
	        fscanf(fp, "%d", &(A->adj[i][j]));
    }	   
    for (i=0; i<A->nrows; ++i) {
        for (j=0; j<A->deg[i]; ++j) 
	    fscanf(fp, "%le", &(A->value[i][j]));
    }

    fclose(fp);
    return 0;
} /* end readsparsematrix */


