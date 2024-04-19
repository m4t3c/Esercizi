#include <stdlib.h>
#include <stdio.h>

struct person {
    char name[256];
    unsigned int age;
};

extern unsigned int count_teenagers(FILE* f);

int main(void) {

    FILE* f = fopen("people2.txt", "r");
    unsigned int r = count_teenagers(f);

    return 0;
}