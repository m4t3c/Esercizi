#include "punti.h"

int main() {

    struct punto3d punti[] = {
    { {4, 4, 4} },
    { {5, 5, 5} },
    { {6, 6, 6} }
    };

    size_t n = sizeof(punti) / sizeof(struct punto3d);
    size_t p1 = 0;
    size_t p2 = 0;
    int r = trova_piu_lontani(punti, n, &p1, &p2);

    return 0;
}