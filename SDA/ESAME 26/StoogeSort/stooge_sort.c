#include <stdlib.h>
#include <math.h>

static void Swap(int* a, int* b) {

	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void StoogeRec(int* vector, int vector_size) {
	
	if (vector[0] > vector[vector_size - 1]) {
		Swap(&vector[0], &vector[vector_size - 1]);
	}

	if (vector_size < 3) {
		return;
	}

	int size_new = (int)ceil((double)2 / 3 * vector_size);
	StoogeRec(vector, size_new);
	StoogeRec(vector + (vector_size - size_new), size_new);
	StoogeRec(vector, size_new);
}

void Stooge(int* vector, size_t vector_size) {

	if (vector_size == 0) {
		return;
	}

	StoogeRec(vector, (int)vector_size);
}