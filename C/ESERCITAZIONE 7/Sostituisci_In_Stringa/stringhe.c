#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>

extern char* sostituisci(const char* str, const char* vecchia, const char* nuova) {
	if (str == NULL || vecchia == NULL || nuova == NULL) {
		return NULL;
	}

	size_t s_len = strlen(str);
	if (s_len == 0) {
		char* res = calloc(1, sizeof(char));
		return res;
	}

	size_t old = strlen(vecchia);
	if (old == 0) {
		char* res = calloc(s_len + 1, sizeof(char));
		strncpy(res, str, s_len);
		return res;
	}
	size_t new = strlen(nuova);
	size_t newlen = s_len;
	const char* occ = str;

	while ((occ = strstr(occ, vecchia)) != NULL) {
		newlen += (new - old);
		occ += old;
	}

	char* res = calloc(newlen + 1, sizeof(char));
	occ = NULL;

	while (1) {
		occ = strstr(str, vecchia);
		if (occ == NULL) {
			break;
		}

		strncat(res, str, occ - str);
		strcat(res, nuova);
		str = occ + old;
	}
	strcat(res, str);
	
	return res;

}