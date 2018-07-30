//fillfullmatrix
#include "lanczos.h"

void fillfullmatrix(FullMatrix V, Vector *v) {
     int i, j;
     for(i=0; i<V.ncols; i++) {
              for(j=0; j<V.nrows; j++) { 
              V.value[j + V.nrows * i] = v[i].value[j];
              }              
     }     
}
