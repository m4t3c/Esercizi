#include "decode.h"
#include <stdlib.h>

void decode(FILE* f) {

	int c = 0;
	while ((c = fgetc(f)) != EOF) {
		
		if (c >= '1' && c <= '9') {
			int count = c - '0';
			int next = fgetc(f);
			for (int i = 0; i < count; ++i) {
				fputc(next, stdout);
			}
		}
		else
		{
			fputc(c, stdout);
		}
	}
}