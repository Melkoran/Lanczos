//copyvector
#include "lanczos.h"

void copyvector(Vector *y, Vector *x) {
     if(y->n != x->n) printf("Dimension dismatch!");
     else {
     int i;
     for(i=0; i<x->n; i++) {
              y->value[i] = x->value[i];
     }}  
}
