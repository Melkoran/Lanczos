//lanczos
#include "lanczos.h"

Vector *lanczos(SparseMatrix *A, int k) {
     int j, i;
     double **arrt;
     struct Vector *v = (struct Vector*)malloc((k+1)*sizeof(struct Vector));
     struct Vector *diag = (struct Vector*)malloc(2*sizeof(struct Vector ));
     struct FullMatrix *V = (struct FullMatrix*)malloc(sizeof(struct FullMatrix ));
     
     createvector(diag, k);
     createvector(diag + 1, k);
     createfullmatrix(V, A->nrows, k+1);
      for(j=0; j<k+1; j++) {
           createvector(v+j, A->nrows);
	   for(i=0; i<A->nrows; i++)
	     v[j].value[i] = 0.0;
      }

     arrt = malloc((k+1)*sizeof(double));
     for(i=0; i<k+1; i++)
       arrt[i] = malloc((k+1)*sizeof(double));
     
     for(i=0; i<k+1; i++) {
              for(j=0; j<k+1; j++)
                         arrt[i][j] = 0.0;			 
              
     }
     
     fuellevector(v);    
     scalevector(1/norm(v), v);
     
     for(j=0; j<k; j++) {
                sparsematrixvector(v+j+1, A, v+j);         
                                          
                  if(j>0) {
                           axpy(-arrt[j-1][j], v+j-1, v+j+1);   
                          }
                arrt[j][j] = dotproduct(v+j, v+j+1);
                axpy(-arrt[j][j], v+j, v+j+1);
                arrt[j+1][j] = norm(v+j+1);
                scalevector(1/arrt[j+1][j], v+j+1); 
                arrt[j][j+1] = arrt[j+1][j];
     }  
     
     fuelledia(diag, arrt, k);      
     fillfullmatrix(*V, v);       
     printfilematrix(diag, *V, k);
     
      for(i=0; i<k+1; i++)
	free((v+i)->value);
      free(v);

      for(i=0; i<k+1; i++)
	free(arrt[i]);
      free(arrt);
                 
      deletefullmatrix(V);
	
      return diag;
}
