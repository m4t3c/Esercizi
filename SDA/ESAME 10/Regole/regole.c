#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static bool Verifica(int* vcurr, const char* r, size_t l) {

	for (size_t i = 0; i < l + 1; ++i) {
		if (r[i] == 'i' || r[i] == 'I') {
			if (vcurr[i] >= vcurr[i + 1]) {
				return false;
			}
		}
		if (r[i] == 'd' || r[i] == 'D') {
			if (vcurr[i] <= vcurr[i + 1]) {
				return false;
			}
		}
	}

	return true;
}

static void RegoleRec(const char* r, size_t i, size_t l, int* vcurr, int* vused) {

	if (i == l + 1) {
		if (Verifica(vcurr, r, l)) {
			for (size_t j = 0; j < l + 1; ++j) {
				if (j == l) {
					printf("%d\n", vcurr[j]);
				}
				else
				{
					printf("%d ", vcurr[j]);
				}
			}
		}
		return;
	}

	for (int j = 1; j <= (int)l + 1; ++j) {
		if (!vused[j]) {
			vcurr[i] = j;
			vused[j] = 1;
			RegoleRec(r, i + 1, l, vcurr, vused);
			vused[j] = 0;
		}
	}

}

void Regole(const char* r) {
	
	size_t l = strlen(r);
	int* vcurr = malloc((l + 1) * sizeof(int));
	int* vused = calloc((l + 2), sizeof(int));

	RegoleRec(r, 0, l, vcurr, vused);

	free(vcurr);
	free(vused);

	return;
}