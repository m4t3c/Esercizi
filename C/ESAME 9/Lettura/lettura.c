#include "lettura.h"
#include <stdlib.h>
#include <string.h>

extern char* fgets_malloc(FILE* f) {

	char* buf = NULL;
	size_t size = 1;
	size_t lenght = 0;
	int c = 0;

	while ((c = fgetc(f)) != '\n' && c != EOF)
	{
		if (lenght + 1 >= size) {
			size *= 2;
			buf = realloc(buf, size * sizeof(char));
		}
		buf[lenght] = c;
		++lenght;
	}

	if (lenght == 0) {
		free(buf);
		return NULL;
	}

	char* res = malloc((lenght + 1) * sizeof(char));
	memcpy(res, buf, (lenght) * sizeof(char));
	res[lenght] = '\n';
	free(buf);
	return res;
}