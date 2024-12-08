#include "lettura.h"

int main(void) {

	size_t size = 0;
	int *r;
	r = leggiinteri("dati1.bin", &size);
	r = leggiinteri("dati2.bin", &size);
	r = leggiinteri("dati3.bin", &size);
	r = leggiinteri("dati4.bin", &size);

	return 0;
}