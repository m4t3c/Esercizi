#include <stdlib.h>

extern int OptimalSubarray(const int* v, size_t n);

int main(void) {

	const int v[] = { -100, 5, 6, -3, 1, 2, 1, 3 };
	int res = OptimalSubarray(v, 8);

	return 0;
}