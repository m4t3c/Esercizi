#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void PasswordRec(const char* str, int n, int i, char* vcurr, int* count) {

	if (i == n) {
		printf("%s\n", vcurr);
		(*count)++;
		return;
	}

	for (size_t j = 0; j < strlen(str); ++j) {
		vcurr[i] = str[j];
		PasswordRec(str, n, i + 1, vcurr, count);
	}
}

int Password(const char* str, int n) {
	if (str == NULL || n == 0) {
		return 0;
	}

	int count = 0;
	char* vcurr = calloc(n + 1, sizeof(char));

	PasswordRec(str, n, 0, vcurr, &count);
	free(vcurr);

	return count;
}