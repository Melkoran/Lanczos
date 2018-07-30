#include "lanczos.h"

void printsparsematrix(SparseMatrix A) {
  int i,j,k;
  double a;

  for (i=0; i<A.nrows; i++) {
      printf(" row %6d:\n", i);
      for (k=0; k<A.deg[i]; k++) {
	  j=A.adj[i][k];
	  printf("%12d", j);
      }
      printf("\n");
      for (k=0; k<A.deg[i]; k++) {
	  a=A.value[i][k];
	  printf("%12.4le", a);
      }
      printf("\n");
      fflush(stdout);
  } // end for i
} // printsparsematrix




