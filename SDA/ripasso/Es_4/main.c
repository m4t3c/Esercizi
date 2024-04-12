#include "vettore.h"

int main(void) {
	int* data = NULL;
	int arr[] = { 2, 5, 6, 9, 2 };
	data = calloc(5, sizeof(int));

	for (size_t i = 0; i < 5; ++i) {
		data[i] = arr[i];
	}

	struct vettore v = { data, 5 };

	Push(&v, 33);
	int p = Pop(&v);

	return 0;
}