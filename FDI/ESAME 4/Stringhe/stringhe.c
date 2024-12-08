#include <stdio.h>
#include <stdlib.h>
#include "stringhe.h"

struct stringa* read_stringhe_bin(const char* filename, unsigned int* pn) {
    FILE* file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Errore nell'apertura del file");
        return NULL;
    }

    struct stringa* strings = NULL;
    unsigned int count = 0;

    while (!feof(file)) {
        unsigned char length;
        if (fread(&length, sizeof(unsigned char), 1, file) != 1) {
            break;
        }

        char* str = (char*)malloc(length + 1);
        if (str == NULL) {
            perror("Errore nell'allocazione di memoria");
            fclose(file);
            return NULL;
        }

        if (fread(str, sizeof(char), length, file) != length) {
            free(str);
            break;
        }

        str[length] = '\0';

        strings = realloc(strings, (count + 1) * sizeof(struct stringa));
        strings[count].length = length;
        strings[count].s = str;

        count++;
     }

    fclose(file);
    *pn = count;
    return strings;
}