#include <stdio.h>
#include <stdlib.h>

extern void croceromana(FILE *f, unsigned char n);

int main() {
	FILE* f = fopen("prova.txt", "w");
	croceromana(f, 2);
	fclose(f);

	return 0;
}