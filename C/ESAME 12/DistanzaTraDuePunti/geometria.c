#include <stdlib.h>
#include <math.h>

struct punto {
    double x, y;
};

double distanza(struct punto* a, struct punto* b) {

    return sqrt(((a->x - b->x) * (a->x - b->x)) + ((a->y - b->y) * (a->y - b->y)));
}