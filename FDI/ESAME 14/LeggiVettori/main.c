#include "vettori.h"

int main(void) {

	FILE* f = fopen("vettori1.log", "r");
	size_t n = 0;

	struct vettore* res = vettori_leggi(f, &n);
	fclose(f);

	return 0;
}