#include "matrix.h"
#include <stdlib.h> // per malloc e free
#include <string.h> // per memcpy

// Funzione per creare una matrice vuota con dimensioni specificate
static struct matrix* create_matrix(size_t rows, size_t cols) {
    struct matrix* mat = (struct matrix*)malloc(sizeof(struct matrix));
    if (mat == NULL) {
        return NULL;
    }
    mat->M = rows;
    mat->N = cols;
    mat->data = (double*)malloc(rows * cols * sizeof(double));
    if (mat->data == NULL) {
        free(mat);
        return NULL;
    }
    return mat;
}

// Funzione per liberare la memoria di una matrice
static void free_matrix(struct matrix* mat) {
    if (mat != NULL) {
        free(mat->data);
        free(mat);
    }
}

extern struct matrix* mat_sommadiretta(const struct matrix* a, const struct matrix* b) {
    // Creare una nuova matrice con dimensioni (a->M + b->M) x (a->N + b->N)
    struct matrix* result = create_matrix(a->M + b->M, a->N + b->N);
    if (result == NULL) {
        return NULL;
    }

    // Inizializzare tutti i valori della matrice a 0
    for (size_t i = 0; i < (a->M + b->M) * (a->N + b->N); i++) {
        result->data[i] = 0.0;
    }

    // Copiare i dati della matrice a nella parte superiore sinistra della matrice risultante
    for (size_t i = 0; i < a->M; i++) {
        for (size_t j = 0; j < a->N; j++) {
            result->data[i * result->N + j] = a->data[i * a->N + j];
        }
    }

    // Copiare i dati della matrice b nella parte inferiore destra della matrice risultante
    for (size_t i = 0; i < b->M; i++) {
        for (size_t j = 0; j < b->N; j++) {
            result->data[(a->M + i) * result->N + (a->N + j)] = b->data[i * b->N + j];
        }
    }

    return result;
}
