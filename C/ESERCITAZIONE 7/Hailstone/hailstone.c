#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

	if (argc != 2) {
		return -1;
	}

	char* endptr = 0;
	int n = strtol(argv[1], &endptr, 10);
	if (*endptr != 0) {
		return -1;
	}

	if (n <= 0) {
		return 0;
	}

	if (n == 1) {
		fprintf(stdout, "1");
		return 1;
	}

	fprintf(stdout, "%d, ", n);

	int n_elem = 1;
	while (n != 1) {
		if (n % 2 == 0) {
			n /= 2;
			++n_elem;
		}
		else
		{
			n = (n * 3) + 1;
			++n_elem;
		}
		if (n != 1) {
			fprintf(stdout, "%d, ", n);
		}
		else
		{
			fprintf(stdout, "1");
		}
	}

	return n_elem;
}