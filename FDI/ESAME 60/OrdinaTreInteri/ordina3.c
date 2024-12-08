#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

	if (argc != 4) {
		return 1;
	}

	char* endptr;
	int* num = malloc(3 * sizeof(int));
	size_t index = 0;
	for (size_t i = 1; i < 4; ++i) {
		num[index] = strtol(argv[i], &endptr, 10);
		if (*endptr != 0) {
			free(num);
			return 1;
		}
		++index;
	}

	for (size_t i = 0; i < 2; ++i) {
		size_t j = 1;
		for (; j < 3; ++j) {
			if (num[i] < num[j]) {
				int maxtmp = num[i];
				num[i] = num[j];
				num[j] = maxtmp;
			}
		}
		++j;
	}

	for (size_t i = 0; i < 2; ++i) {
		printf("%d ", num[i]);
	}

	printf("%d\n", num[2]);

	return 0;
}