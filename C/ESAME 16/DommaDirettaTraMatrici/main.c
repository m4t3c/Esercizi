#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

// Funzione per stampare una matrice
void print_matrix(const struct matrix* mat) {
    for (size_t i = 0; i < mat->M; i++) {
        for (size_t j = 0; j < mat->N; j++) {
            printf("%f ", mat->data[i * mat->N + j]);
        }
        printf("\n");
    }
}

int main() {
    // Creazione della matrice A
    struct matrix a;
    a.M = 2;
    a.N = 3;
    double a_data[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
    a.data = a_data;

    // Creazione della matrice B
    struct matrix b;
    b.M = 2;
    b.N = 2;
    double b_data[] = { 1.0, 6.0, 0.0, 1.0 };
    b.data = b_data;

    // Calcolo della somma diretta delle matrici A e B
    struct matrix* c = mat_sommadiretta(&a, &b);
    if (c == NULL) {
        fprintf(stderr, "Errore nella creazione della matrice somma diretta.\n");
        return EXIT_FAILURE;
    }

    // Stampa della matrice risultante
    printf("Matrice risultante dalla somma diretta:\n");
    print_matrix(c);

    // Liberare la memoria della matrice risultante
    free(c->data);
    free(c);

    return EXIT_SUCCESS;
}
