#include <stdlib.h>

extern void PancakeSort(int* v, size_t v_size);

int main(void) {

	int v[] = { 33, 4, 23, 11, 7, 22, 100, 46 };
	PancakeSort(v, 8);

	return 0;
}