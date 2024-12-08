#include <stdlib.h>
#include <stdio.h>

static void ConcentrazioneRec(int n, double c, int i) {

	if (i == n) {
		printf("%lf", c);
		return;
	}

	ConcentrazioneRec(n, 0.3 * c + 0.2, i + 1);
}

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	if (n < 1 || *endptr != 0) {
		return 1;
	}

	ConcentrazioneRec(n, 0, 1);

	return 0;
}