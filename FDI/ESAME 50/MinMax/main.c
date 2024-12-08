#include <stdlib.h>

extern void minmax(const int *v, size_t n, int *min, int *max);

int main(void) {

	int v[] = { 3, 45, 65, 1, 2, 33 };
	int min = 0;
	int max = 0;
	minmax(v, 6, &min, &max);

	return 0;
}