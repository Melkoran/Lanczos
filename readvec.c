#include "lanczos.h"

int readvector(char *filename, Vector *y)
{
    
    FILE *fp; 
    int j,k;
    fp=fopen(filename,"r"); 
    
    if (fp==NULL) {
       fprintf(stderr, "Could not open file %s.\n", filename);
       return -1;
    } /* end if */

    fscanf(fp, "%d", &k);
    createvector(y,k);
    
    for (j=0; j<y->n; ++j)
        fscanf(fp, "%le", &(y->value[j]));
        
    fclose(fp);
    return 0;
} // end readvector
