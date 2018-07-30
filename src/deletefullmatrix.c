//deletefullmatrix
#include "lanczos.h"

void deletefullmatrix(FullMatrix *V) {
     free(V->value);
     free(V);     
}
