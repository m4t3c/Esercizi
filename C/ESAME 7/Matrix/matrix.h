#if !defined MATRIX_H

#define MATRIX_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

struct matrix {
    size_t N, M;
    double* data;
};

extern int matrix_read(struct matrix* matr, FILE* f);

#endif /*MATRIX_H*/