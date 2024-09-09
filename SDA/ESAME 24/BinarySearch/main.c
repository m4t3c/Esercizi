#include <stdlib.h>

extern int BinarySearch(const int* v, size_t v_size, int value);

int main(void) {

	int v[] = { 1, 4, 7, 8, 12, 19, 23, 54, 88 };
	int res = BinarySearch(v, 9, 7);

	return 0;
}