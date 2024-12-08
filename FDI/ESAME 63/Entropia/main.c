#include <stdlib.h>
#include <stdint.h>

extern double entropia(uint64_t* count, size_t n);

int main(void) {

	uint64_t count[] = { 0, 0, 0, 0 };
	size_t n = sizeof(count) / sizeof(count[0]);

	double r = entropia(count, n);

	return 0;
}