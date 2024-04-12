#if !defined TORRECARTONI_H

#define TORRECARTONI_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    unsigned int p; // Peso
    unsigned int a; // Altezza
    unsigned int l; // Limite
} Cartone;

typedef struct {
    unsigned a; //Altezza torre
    int* c_ids; //Vettore di cartoni grande n

    int c_size; //dimensione di c_ids
    unsigned peso; // peso della torre
}Torre;

extern void TorreCartoni(const Cartone* c, size_t n);

#endif /*TORRECARTONI_H*/