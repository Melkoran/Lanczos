#include "lanczos.h"

void printfullmatrix(FullMatrix A) {
  int i,j;

  for (i=0; i<A.nrows; i++) {
      for (j=0; j<A.ncols; j++) 
	  printf("%12.4le", A.value[i+j*A.nrows]);
      printf("\n");
      fflush(stdout);
  } // end for i
} // printfullmatrix




