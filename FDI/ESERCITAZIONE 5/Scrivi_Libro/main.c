#include "libri.h"

int main(void) {

	char titolo[] = "Geometria";
	uint16_t anni[] = { 2001, 2002, 0 };

	struct libro libro1 = { titolo, anni };

	FILE* f = fopen("libro.txt", "wb");
	if (f == NULL) {
		return EXIT_FAILURE;
	}

	bool res = libro_scrivi(&libro1, f);

	printf("la creazione del file e' avvenuta con successo?: %s.", res ? "Si'" : "No");

	return EXIT_SUCCESS;
}