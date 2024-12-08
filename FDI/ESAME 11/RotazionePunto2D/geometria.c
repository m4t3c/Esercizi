#include <stdlib.h>
#include <math.h>

struct punto {
    double x, y;
};

extern void rotazione(struct punto* p, double alfa) {

    double x_new = p->x * cos(alfa) - p->y * sin(alfa);
    double y_new = p->x * sin(alfa) + p->y * cos(alfa);
    p->x = x_new;
    p->y = y_new;

}