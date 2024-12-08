#include "libri.h"
#include <string.h>

struct libro* filtra_libri(struct libro* plibri, unsigned int* pn, const char* cerca) {

	struct libro* res = NULL;
	unsigned p = 0;
	for (unsigned i = 0; i < *pn; ++i) {
		if (strstr(plibri[i].titolo, cerca) != NULL) {
			res = realloc(res, (p + 1) * sizeof(struct libro));
			res[p].codice = plibri[i].codice;
			memcpy(res[p].titolo, plibri[i].titolo, strlen(plibri[i].titolo));
			res[p].pagine = plibri[i].codice;
			++p;
		}
	}

	*pn = p;
	return res;
}