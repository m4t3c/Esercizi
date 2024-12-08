#include "vettori.h"

int main() {

	FILE* f = fopen("vettori2.bin", "rb");
	struct vettore* v = malloc(sizeof(struct vettore));
	int res = vettore_leggi(f, v);
	fclose(f);
	if (res == 1) {
		printf("La lettura ha avuto esito positivo\nil vettore ha dimensione %u\ne` composto da:", v->size);
		for (size_t i = 0; i < v->size; ++i) {
			printf("%lf ", v->data[i]);
		}
	}

	return 0;
}