#include <stdlib.h>

extern int *missing(const int *v, size_t n, int min, int max, size_t *size);

int main(void) {

	int v[] = { 3, 8, 10, 11, 13, 19, 20 };
	size_t size = 0;

	int* res = missing(v, 7, 1, 30, &size);

	return 0;
}