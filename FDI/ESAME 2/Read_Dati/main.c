#include "dati.h"

int main(void) {

	unsigned pn = 0;
	struct dato* res = NULL;
	res = read_dati("dati1.txt", &pn);
	res = read_dati("dati2.txt", &pn);
	res = read_dati("dati3.txt", &pn);

	return 0;
}