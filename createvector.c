//createvector
#include "lanczos.h"

void createvector(Vector *x, int n) {
     x->value = (double*)malloc(n*sizeof(double)); 
     x->n = n;  
}
