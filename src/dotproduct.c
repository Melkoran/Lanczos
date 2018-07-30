//dotproduct
#include "lanczos.h"

double dotproduct(Vector *x, Vector *y) {
     if(y->n != x->n) printf("Dimension dismatch!");
     else {
       int i;
       double sum = 0.0;
     for(i=0; i<x->n; i++) {
           sum += x->value[i] * y->value[i];           
     }  
     return sum;
     }
}
