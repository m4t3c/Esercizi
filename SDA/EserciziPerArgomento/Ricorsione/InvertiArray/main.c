#include <stdlib.h>

extern void InvertiArray(int* arr, size_t size);

int main(void) {

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	InvertiArray(arr, 9);

	return 0;
}