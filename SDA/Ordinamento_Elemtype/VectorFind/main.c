#include "vettore.h"

int main(void) {

	ElemType data[] = { 1, 5, 6, 8, 12, 15, 20 };
	Vector v = { 7, 7, data };
	ElemType e = 9;

	int res = VectorFind(&v, &e);

	return 0;
}