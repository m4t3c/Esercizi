#include "risiko.h"

int main(void) {

	struct lancio attacco = { {6, 3}, 2 };
	struct lancio difesa = { {5, 3, 1}, 3 };
	char perse_attacco = 0;
	char perse_difesa = 0;

	confronta_lanci(&attacco, &difesa, &perse_attacco, &perse_difesa);

	return 0;
}