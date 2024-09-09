#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>

static void GuidaLaPulceRec(const int* f, size_t f_size, int pos, int i, int a, int b, int n, int h, char* vcurr, char* vbest, size_t curr_size, size_t* size_best) {

	if (pos == h && i <= n) {
		if (curr_size < *size_best) {
			*size_best = curr_size;
			memcpy(vbest, vcurr, n * sizeof(char));
		}
		return;
	}
	if (i == n) {
		return;
	}

	bool check = true;

	if (pos >= b) {
		for (size_t j = 0; j < f_size; ++j) {
			if (f[j] == pos - b) {
				check = false;
				break;
			}
		}
		if (check) {
			vcurr[i] = 'b';
			GuidaLaPulceRec(f, f_size, pos - b, i + 1, a, b, n, h, vcurr, vbest, curr_size + 1, size_best);
		}
	}
	check = true;

	for (size_t j = 0; j < f_size; ++j) {
		if (f[j] == pos + a) {
			check = false;
			break;
		}
	}

	if (check) {
		vcurr[i] = 'a';
		GuidaLaPulceRec(f, f_size, pos + a, i + 1, a, b, n, h, vcurr, vbest, curr_size + 1, size_best);
	}

}

char* GuidaLaPulce(const int* f, size_t f_size, int a, int b, int n, int h, size_t* ret_size) {

	char* vcurr = malloc(n * sizeof(char));
	char* vbest = malloc(n * sizeof(char));

	size_t size_best = INT_MAX;
	GuidaLaPulceRec(f, f_size, 0, 0, a, b, n, h, vcurr, vbest, 0, &size_best);

	if (size_best == INT_MAX) {
		free(vcurr);
		free(vbest);
		*ret_size = 0;
		return NULL;
	}

	*ret_size = size_best;
	char* res = malloc(*ret_size * sizeof(char));
	memcpy(res, vbest, *ret_size * sizeof(char));
	
	free(vcurr);
	free(vbest);
	return res;
}