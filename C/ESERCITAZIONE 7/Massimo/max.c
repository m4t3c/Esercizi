#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

	if (argc == 1) {
		return 1;
	}
	
	int* v = calloc(argc - 1, sizeof(int));
	char *endptr = 0;

	for (int i = 0; i < argc - 1; ++i) {
		v[i] = strtol(argv[i + 1], &endptr, 10);
		if (*endptr != 0) {
			free(v);
			return 1;
		}
	}

	size_t m_idx = 0;
	for (int i = 0; i < argc - 1; ++i) {
		if (v[i] > v[m_idx]) {
			m_idx = i;
		}
	}

	fprintf(stdout, "%d", v[m_idx]);
	return 0;
}