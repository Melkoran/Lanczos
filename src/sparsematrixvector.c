//sparsematrixvector
#include "lanczos.h"

void sparsematrixvector(Vector *y, SparseMatrix *A, Vector *x) {
   if(A->ncols != x->n || y->n != A->nrows) printf("Keine gleiche Dimension!");
   else {
        unsigned int i,j,l=0;
        double sum=0.0;
        for(i=0; i<y->n; i++) {
                 if(A->deg[i] > 0)
                              for(j=0; j<A->deg[i]; j++) {                                                                               
                                       sum += x->value[A->adj[i][j]] * A->value[i][l];                                             
                                       l++;                                   
                 }
                 y->value[i] = sum;
                 sum = 0.0;  
                 l=0;               
        }                 
   }
}
