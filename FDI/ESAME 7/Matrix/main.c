#include "matrix.h"

int main(void) {
	
	struct matrix* matr = malloc(sizeof(struct matrix));
	FILE* f = fopen("A.txt", "r");

	int r = matrix_read(matr, f);
	fclose(f);

	return 0;
}