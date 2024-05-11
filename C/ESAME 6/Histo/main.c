#include <stdlib.h>

extern void histogram(const char* values, size_t n);

int main(void) {
	char values[] = { 1, 2, 3 };
	histogram(values, 3);

	return 0;
}