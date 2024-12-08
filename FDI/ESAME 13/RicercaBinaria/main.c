#include <stdlib.h>

int ricerca_binaria(const int* v, size_t n, int x);

int main() {
	int v[] = { 1, 2, 3, 5, 6, 7, 8, 9 };
	int r = ricerca_binaria(v, 8, 5);

	return 0;
}