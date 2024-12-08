#include <stdio.h>

int rimuovidoppie(const char* filein, const char* fileout) {

	FILE* fi = fopen(filein, "r");
	if (fi == NULL) {
		return 0;
	}
	FILE* fo = fopen(fileout, "w");
	if (fo == NULL) {
		return 0;
	}

	int c = 0;
	int prev = EOF;
	while ((c = fgetc(fi)) != EOF) {
		if (c != prev) {
			fputc(c, fo);
		}
		
		prev = c;
	}

	fclose(fi);
	fclose(fo);

	return 1;
}