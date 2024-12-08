#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {

	if (argc != 3) {
		fprintf(stderr, "Il numero di parametri non e' corretto. Sintassi del programma: \"mul <a> < b>\"");
		return 1;
	}

	char *endptr = 0;
	int a = strtol(argv[1], &endptr, 10);
	if (*endptr != 0) {
		fprintf(stderr, "Il numero di parametri non e' corretto. Sintassi del programma: \"mul <a> < b>\"");
		return 1;
	}
	int b = strtol(argv[2], &endptr, 10);
	if (*endptr != 0) {
		fprintf(stderr, "Il numero di parametri non e' corretto. Sintassi del programma: \"mul <a> < b>\"");
		return 1;
	}

	int res = a * b;

	printf("%d", res);
	return 0;
}