#include <stdlib.h>
#include <stdio.h>

extern void write_bin(const double* values, size_t n, FILE* f);

int main(void) {

	double values[] = { 3, 5, 3.433, 23.2333, 5454.2 };
	FILE* f = fopen("prova.bin", "wb");
	write_bin(values, 5, f);
	fclose(f);

	return 0;
}