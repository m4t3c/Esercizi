#include <stdio.h>

int main(int argc, char** argv) {

	for (int i = 1; i < argc; ++i) {
		for (int j = 0; argv[i][j] != 0; ++j) {
			if (argv[i][j + 1] == 0 && (argv[i][j] >= 'a' && argv[i][j] <= 'z')) {
				argv[i][j] -= 'a' - 'A';
			}
			printf("%c", argv[i][j]);
		}
		if (i + 1 < argc) {
			printf(" ");
		}
	}

	printf("\n");

	return 0;
}