#if !defined LITTLE_ALCHEMY_H

#define LITTLE_ALCHEMY_H

#include <stdio.h>
#include <string.h>
#include <stdio.h>

struct element {
    char* first;
    char* second;
    char* product;
};

extern const char* combine(const char* first, const char* second, const struct element* elems, size_t n);

#endif /*LITTLE_ALCHEMY_H*/