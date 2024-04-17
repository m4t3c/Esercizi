#include "audio.h"

int audio_read(const char* filename, struct audio* a) {

	FILE* f = fopen(filename, "rb");
	if (f == NULL) {
		return 0;
	}
	
	size_t n = 0;
	short tmp = 0;
	while (fread(&tmp, sizeof(short), 1, f) == 1) {
		++n;
	}

	a->samples = n / 2;
	a->left = calloc(n / 2, sizeof(short));
	a->right = calloc(n / 2, sizeof(short));
	
	fseek(f, 0, SEEK_SET);

	size_t n_read = 0;
	for (size_t i = 0; i < n/2; ++i) {
		n_read += fread(&(a->left[i]), sizeof(short), 1, f);
		n_read += fread(&(a->right[i]), sizeof(short), 1, f);
		if (n_read != 2) {
			free(a->left);
			free(a->right);
			a->left = NULL;
			a->right = NULL;
			a->samples = 0;
			fclose(f);
			return 0;
		}
		n_read = 0;
	}
	
	fclose(f);
	return 1;
}