#include <stdlib.h>
#include <string.h>

unsigned int conta_occorrenze(const char* testo, const char* stringa) {

	if (testo == NULL || testo[0] == 0 || stringa == NULL || stringa[0] == 0) {
		return 0;
	}

	size_t str_len = strlen(stringa);
	const char* posizione = testo;
	unsigned res = 0;
	while ((posizione = strstr(posizione, stringa)) != NULL)
	{
		++res;
		posizione += str_len;
	}

	return res;
}