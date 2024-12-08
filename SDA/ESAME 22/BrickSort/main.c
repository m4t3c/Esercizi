#include <stdlib.h>

extern void BrickSort(int* v, size_t v_size);

int main(void) {

	int v[] = { 4, 32, 2, 8, 6, 77, 0, 12 };
	BrickSort(v, 8);

	return 0;
}