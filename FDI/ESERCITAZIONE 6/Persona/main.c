#include "persona.h"

int main(void) {

	size_t s = 0;
	struct persona* r = leggi_persone("file1.txt", &s);

	return 0;
}