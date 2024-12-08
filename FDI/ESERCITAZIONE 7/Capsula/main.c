#include <stdio.h>
#include <stdlib.h>

extern void capsula(FILE* f, unsigned char n);

int main(void) {

	FILE* f = fopen("output.txt", "w");

	capsula(f, 2);

	fclose(f);

	return 0;
}