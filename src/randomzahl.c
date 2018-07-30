//randomzahl
#include <math.h>
#include "lanczos.h"

double randomzahl(int k) {   
    double count = 0.0;
    int i;
    srand(k); 
    count = (double)(100*rand() % 201) - 100;
    for(i=0; i < 15; i++) {
             count += (double)rand()/pow(10, 5 + i);
    }   
    return count/100;
}
