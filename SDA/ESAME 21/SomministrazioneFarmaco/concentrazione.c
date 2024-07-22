#include <stdlib.h>
#include <stdio.h>

static void ConcentrazioneRec(int n, double* c) {
	if (n == 1) {
		return;
	}

	*c = (0.3 * (*c)) + 0.2;
	ConcentrazioneRec(n - 1, c);
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

	double c = 0;
	ConcentrazioneRec(n, &c);
	printf("%lf", c);

	return 0;
}