//axpy
#include "lanczos.h"

void axpy(double alpha, Vector *x, Vector *y) {
     if(y->n != x->n) printf("Dimension dismatch!");
     else {
     int i;
     for(i=0; i<x->n; i++) {
              y->value[i] += alpha*x->value[i];         
     }}    
}
