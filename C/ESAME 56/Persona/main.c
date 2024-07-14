#include "persona.h"

int main(void) {

	size_t size = 0;
	struct persona* res = leggi_persone("file1.txt", &size);

	return 0;
}