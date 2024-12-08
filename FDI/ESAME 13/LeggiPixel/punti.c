#include "punti.h"

struct pixel* read_pixels(FILE* f, size_t* n) {
    if (f == NULL || n == NULL) {
        return NULL;
    }

    fseek(f, 0, SEEK_END);
    size_t f_size = ftell(f);
    fseek(f, 0, SEEK_SET);

    *n = f_size / 7;
    struct pixel* res = malloc(*n * sizeof(struct pixel));

    for (size_t i = 0; i < *n; ++i) {
        unsigned char buffer[2];
        fread(buffer, 1, 2, f);
        res[i].x = buffer[0] | buffer[1] << 8;
        fread(buffer, 1, 2, f);
        res[i].y = buffer[0] | buffer[1] << 8;
        fread(res[i].rgb, 1, 3, f);

    }

    return res;
}