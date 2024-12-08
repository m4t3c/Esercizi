#include <stdint.h>
#include <stdio.h>

extern void scrivi_v(FILE* f, uint8_t n);

int main() {

	FILE* f = fopen("prova.txt", "w");

	scrivi_v(f, 9);

	fclose(f);

	return 0;
}