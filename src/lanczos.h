#include <stdio.h>
#include <stdlib.h>

struct Vector{ 
       int n; 
       double 
       *value; 
};
typedef struct Vector Vector;
struct FullMatrix{
       int nrows; 
       int ncols ; 
       double *value; 
};
typedef struct FullMatrix FullMatrix;
struct SparseMatrix{
       int nrows; 
       int ncols ; 
       int *deg; 
       int **adj; 
       double **value;
};
typedef struct SparseMatrix SparseMatrix;


void axpy(double alpha, Vector *x, Vector *y);
void createvector(Vector *x, int n);
void copyvector(Vector *y, Vector *x);
int readvector(char *filename, Vector *y);
double norm(Vector *x);
double dotproduct(Vector *x, Vector *y);
void scalevector(double alpha, Vector *x);
void deletevector(Vector *x);
void printvector(Vector *x);
void createfullmatrix(FullMatrix *V, int m, int n);
void deletefullmatrix(FullMatrix *V);
void printfullmatrix(FullMatrix V);
void createsparsematrix(SparseMatrix *A, int m, int n, int *deg);
void deletesparsematrix(SparseMatrix *A);
void sparsematrixvector(Vector *y, SparseMatrix *A, Vector *x);
int readsparsematrix(char* filename, SparseMatrix *A);
void printsparsematrix(SparseMatrix A);
double randomzahl(int k);
int printfilematrix(Vector *diag,FullMatrix V,int k);
void fillfullmatrix(FullMatrix V, Vector *v);
void fuellevector(Vector *x);
struct Vector *lanczos(SparseMatrix *A, int k);
void fuelledia(Vector *diag, double **arrt, int k);
