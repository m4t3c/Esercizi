#include <stdlib.h>

extern void Stooge(int* vector, size_t vector_size);

int main(void) {

	int v[] = { 3, 45, 2, 1, 22, 67, 11, 6, 33, 10 };
	Stooge(v, 10);

	return 0;
}