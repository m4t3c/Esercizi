#include <stdio.h>

extern int scrivi_conta_caratteri(FILE* f, const char* s);

int main(void) {

	FILE* f = fopen("output.txt", "w");
	int r = scrivi_conta_caratteri(f, "scrivimi su file per completare l'esercizio.");
	fclose(f);

	return 0;
}