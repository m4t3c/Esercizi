#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

struct person {
    char name[256];
    unsigned int age;
};

unsigned int count_teenagers(FILE* f) {

    unsigned n = 0;
    fscanf(f, "%u", &n);

    struct person* p = calloc(n, sizeof(struct person));
    unsigned res = 0;

    for (unsigned i = 0; i < n; ++i) {

        fscanf(f, "%s %u", &p->name[i], &p->age);
        if (p->age >= 13 && p->age <= 19) {
            ++res;
        }
    }

    free(p);

    return res;
}