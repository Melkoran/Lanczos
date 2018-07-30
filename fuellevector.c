//fuellevector
#include "lanczos.h"
  
void fuellevector(Vector *x) {
     int i;
     for(i = 0; i<x->n; i++){ 
       x->value[i] = randomzahl(i);          
     }
}
