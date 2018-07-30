//createfullmatrix
#include "lanczos.h"

void createfullmatrix(FullMatrix *V, int m, int n) {
     V->value = (double*)malloc(m*n*sizeof(double));   
     V->nrows = m;
     V->ncols = n;     
}
