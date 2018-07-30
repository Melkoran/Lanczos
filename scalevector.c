//scalevector
#include "lanczos.h"

void scalevector(double alpha, Vector *x) {
     int i;
     for(i=0; i<x->n; i++) {
              x->value[i] *= alpha;       
     } 
}
