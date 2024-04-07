#include "geometria.h"

int main(void) {

	struct punto p1 = {2.0, 3.0};
	struct punto p2 = {2.0, 5.0};
	struct punto p3 = {2.0, 4.0};

	int r = colineari(p1, p2, p3);

	return 0;
}