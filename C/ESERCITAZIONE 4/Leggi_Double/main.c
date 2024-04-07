#include "lettura.h"

int main(void) {

	double* r = NULL;
	size_t size = 0;
	r = leggidouble("dati1.txt", &size);
	r = leggidouble("dati2.txt", &size);
	r = leggidouble("dati3.txt", &size);

	return 0;
}