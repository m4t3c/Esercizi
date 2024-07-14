#include <stdio.h>
#include <stdlib.h>

void BacktrackStrRec(int n, int i, char* vcurr) {
	if (i == n) {
		printf("{ ");
		for (int i = 0; i < n; ++i) {
			printf("%c", vcurr[i]);
		}
		printf(" }");
		return;
	}

	for (int c = 'a'; c < 'a' + n; ++c) {
		vcurr[i] = c;
		BacktrackStrRec(n, i + 1, vcurr);
	}
}

void BacktrackStr(int n) {

	if (n <= 0 || n > 26) {
		return;
	}

	char* vcurr = malloc(n * sizeof(char));

	BacktrackStrRec(n, 0, vcurr);

	free(vcurr);
}