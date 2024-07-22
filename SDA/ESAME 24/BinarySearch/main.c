#include <stdlib.h>

extern int BinarySearch(const int* v, size_t v_size, int value);

int main(void) {

	int v[] = { 2 , 5, 6, 7, 8, 11, 23, 45 };
	int res = BinarySearch(v, 8, 11);

	return 0;
}