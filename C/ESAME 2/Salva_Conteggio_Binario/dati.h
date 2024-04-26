#if !defined DATI_H

#define DATI_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

struct dato {
    double valore;
    unsigned classe;
};

extern int salva_conteggio_bin(const char* filename, struct dato* pdati, unsigned int n);

#endif /*DATI_H*/
