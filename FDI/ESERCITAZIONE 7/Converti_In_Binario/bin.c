#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

	if (argc != 2) {
		return 1;
	}

	char* endptr = 0;
	int n = strtol(argv[1], &endptr, 10);
	if (*endptr != 0 || n < 0) {
		return 1;
	}

	if (n == 0) {
		fprintf(stdout, "0");
		return 0;
	}

	int tmp = n;
	int mem = 0;
	while (tmp != 0)
	{
		tmp /= 2;
		++mem;
	}

	int* v = calloc(mem, sizeof(int));
	for (int i = 0; i < mem; ++i) {
		v[i] = n % 2;
		n /= 2;
	}

	for (int i = mem - 1; i >= 0; --i) {
		fprintf(stdout, "%d", v[i]);
	}

	free(v);

	return 0;
}