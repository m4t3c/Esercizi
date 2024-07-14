#include "compress.h"

int main(void) {

	struct dati* d = malloc(sizeof(struct dati));
	int r = dati_read("dati1.bin", d);

	return 0;
}