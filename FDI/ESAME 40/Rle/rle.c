#include "rle.h"
#include <stdio.h>

bool easy_rle_decode(const char* nomefilein, const char* nomefileout) {

	FILE* fi = fopen(nomefilein, "rb");
	if (fi == NULL) {
		return false;
	}
	FILE* fo = fopen(nomefileout, "wb");
	if (fo == NULL) {
		fclose(fi);
		return false;
	}

	unsigned char n, c;

	while (fread(&n, sizeof(unsigned char), 1, fi) == 1 && fread(&c, sizeof(unsigned char), 1, fi) == 1) {
		for (unsigned i = 0; i <= n; ++i) {
			if (fwrite(&c, sizeof(unsigned char), 1, fo) != 1) {
				fclose(fi);
				fclose(fo);
				return false;
			}
		}
	}

	fclose(fi);
	fclose(fo);

	return true;
}