#if !defined VETTORI_H

#define VETTORI_H

#include <stdlib.h>

struct vettore {
    size_t n;
    double *data;
};

struct vettore* mergeVettori(const struct vettore*a, const struct vettore*b);

#endif /*VETTORI_H*/