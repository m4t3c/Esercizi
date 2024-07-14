#include "getline.h"

size_t getline(char** lineptr, size_t* n, FILE* stream) {

	if (*lineptr == NULL || *n < 16) {
		(*lineptr) = realloc(*lineptr, 16);
		*n = 16;
	}

	size_t dim = *n;
	size_t read = 0;
	char c = 0;

	while (1)
	{
		if ((c = fgetc(stream)) == EOF) {
			break;
		}
		else
		{
			++read;
			if (read + 1 > dim) {
				dim *= 2;
				(*lineptr) = realloc(*lineptr, dim);
				*n *= 2;
			}

			(*lineptr)[read - 1] = c;

			if (c == '\n') {
				break;
			}
		}
	}

	(*lineptr)[read] = 0;


	return read;
}