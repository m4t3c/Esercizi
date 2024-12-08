#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* cifre[] = { "zero", "uno", "due", "tre", "quattro", "cinque", "sei", "sette", "otto", "nove" };

char* extract_number(const char* message) {
	if (message == NULL) {
		return NULL;
	}
	char parola[256] = { 0 };
	const char* msg = message;
	char* code = NULL;
	int letters_in_word = 0;
	size_t dim_code = 0;

	while (sscanf(msg, "%s%n", parola, &letters_in_word) == 1) {
		for (size_t i = 0; i < 10; i++)
		{
			if (strcmp(parola, cifre[i]) == 0) {
				++dim_code;
				code = realloc(code, dim_code * sizeof(char));
				code[dim_code - 1] = (char)i + '0';
				break;
			}
		}
		msg += letters_in_word;
	}

	code = realloc(code, (dim_code + 1) * sizeof(char));
	code[dim_code] = 0;

	return code;
}