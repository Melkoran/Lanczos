//norm
#include <math.h>
#include "lanczos.h"

double norm(Vector *x) {
       int i;
       double sum=0.0;
       for(i=0; i<x->n; i++) {
                sum += x->value[i] * x->value[i];  
       }      
       sum = sqrt(sum);
       return sum;
}
