//deletesparsematrix
#include "lanczos.h"

void deletesparsematrix(SparseMatrix *A) {
    int i;
    for (i = 0; i < A->nrows; ++i) {
        free(A->value[i]);
    }
    free(A->value);
         
     for (i = 0; i < A->nrows; ++i) {
        free(A->adj[i]);
    }
    free(A->adj);
     free(A->deg);
     free(A);     
}
