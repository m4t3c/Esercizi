#include "somma.h"

static int SommaFinoARec(int n) {  //METTI PREFISSO/SUFFISSO E FALLA DIVENTARE STATIC
	if (n == 1) {
		return 1;
	}

	return SommaFinoA(n - 1) + n;
}

int SommaFinoA(int n) {
	if (n <= 0) {
		return -1;
	}

	return SommaFinoARec(n);
}