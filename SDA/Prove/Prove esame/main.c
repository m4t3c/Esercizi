#include <stdlib.h>
#include <stdio.h>

int f(int i, int j, int k) {
    int* a = malloc(3 * sizeof(int));
    if (i - j >= k + j) {
        return i + 2;
    }
    *a = 2 * f(j - k, i, j);
    *(a + 1) = *a + k;
    printf("\nVal: %d %d", *a, *(a + 1));
    return *a;
}

int main(void) {
    int a = 1, b = 2;
    int r1 = f(a, b, a + b);
    int r2 = f(a, b, b - a);
    printf("\nRis: %d", r1 + r2);
    return 0;
}