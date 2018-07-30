//deletevector
#include "lanczos.h"

void deletevector(Vector *x) {
  free((x)->value);
}
