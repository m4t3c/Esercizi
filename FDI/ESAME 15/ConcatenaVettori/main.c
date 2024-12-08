#include "vettori.h"

int main(void) {

	double data1[] = { 2, 5, 653, 23 };
	struct vettore* a = malloc(sizeof(struct vettore));
	a->data = data1;
	a->n = 4;
	double data2[] = { 34, 22, 1, 576, 2, 1 ,324 };
	struct vettore* b = malloc(sizeof(struct vettore));
	b->data = data2;
	b->n = 7;

	struct vettore*res = mergeVettori(a, b);

	return 0;
}