#include "lanczos.h"

void printvector(Vector *x) {
   int i;

   for (i=0; i<x->n; i++) 
       printf("%12.4le\n", x->value[i]);      
   printf("\n");
   fflush(stdout);
} // end printvec
