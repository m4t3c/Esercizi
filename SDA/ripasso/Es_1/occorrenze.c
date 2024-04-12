#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

	if (argc != 3) {
		fprintf(stderr, "Il numero di parametri non e' corretto. Sintassi del programma: \"occorrenze <s> < c>\"");
		return 1;
	}

	size_t s_len = strlen(argv[1]);
	size_t res = 0;

	for (size_t i = 0; i < s_len; ++i) {
		if (argv[1][i] == argv[2][0]) {
			++res;
		}
	}

	printf("%zu", res);

	return 0;
}