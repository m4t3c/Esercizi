#if !defined MATRIX_H

#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern void mat_symdecomp(const struct matrix* m, struct matrix* S, struct matrix* A);

#endif /*MATRIX_H*/