#include "complessi.h"

int main(void) {

	FILE* i = fopen("complessi.txt", "r");
	struct complesso* cmp = malloc(sizeof(struct complesso));
	int r = read_complesso(cmp, i);
	fclose(i);

	FILE* o = fopen("prova.txt", "w");
	write_complesso(cmp, o);
	fclose(o);

	struct complesso comp1[] = {2.000000, 4.000000};
	struct complesso comp2[] = { 1.000000 - 1.000000 };
	prodotto_complesso(comp1, comp2);

	return 0;
}