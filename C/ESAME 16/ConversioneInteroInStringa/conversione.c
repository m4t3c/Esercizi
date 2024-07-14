#include <stddef.h> // per size_t

extern void itob(unsigned int x, char* sz, size_t n) {
    // Riempie la stringa con zeri per iniziare
    for (size_t i = 0; i < n; i++) {
        sz[i] = '0';
    }
    sz[n] = '\0'; // Aggiunge il terminatore nullo

    // Calcola la rappresentazione binaria di x
    for (size_t i = 0; i < n; i++) {
        if (x & (1 << (n - 1 - i))) {
            sz[i] = '1';
        }
    }
}
