#include "getline.h"

int main(void)
{
    char* line = NULL;
    size_t n = 0;
    FILE* f = fopen("example.txt", "r");
    while (getline(&line, &n, f) > 0) {
        printf("%s", line);
    }
    fclose(f);
    free(line);
    return 0;
}