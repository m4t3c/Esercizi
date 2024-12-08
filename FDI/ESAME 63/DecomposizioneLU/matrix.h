#if !defined MATRIX_H

#define MATRIX_H

#include <stdlib.h>
#include <stdbool.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern bool LUdecomposition(const struct matrix* mat, struct matrix* lower, struct matrix* upper);

#endif /*MATRIX_H*/
