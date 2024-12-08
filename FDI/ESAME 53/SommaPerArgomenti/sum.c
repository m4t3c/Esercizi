#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv) {

	int sum = 0;

	for (int i = 1; i < argc; ++i) {
		char* endptr;
		int a = strtol(argv[i], &endptr, 10);
		if (*endptr == 0) {
			sum += a;
		}
	}

	printf("%d\n", sum);

	return 0;
}