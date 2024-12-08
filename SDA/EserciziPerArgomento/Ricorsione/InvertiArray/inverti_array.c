#include <stdlib.h>
void InvertiArrayRec(int* arr, size_t size, size_t t) {
	if (t >= size / 2) {
		return;
	}

	int tmp = arr[t];
	arr[t] = arr[size - 1 - t];
	arr[size - 1 - t] = tmp;

	InvertiArrayRec(arr, size, t + 1);
}

void InvertiArray(int* arr, size_t size) {
	InvertiArrayRec(arr, size, 0);
}