#include "lettura.h"

int main(void) {
	int* r;
	size_t size = 0;
	r = leggiinteri2("dati1.bin", &size);
	r = leggiinteri2("dati2.bin", &size);
	r = leggiinteri2("dati3.bin", &size);

	return 0;
}