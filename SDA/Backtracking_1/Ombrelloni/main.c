#include <stdlib.h>
#include <stdio.h>

extern int Ombrelloni(int k, int n);

int main(void) {
	int r;
	r = Ombrelloni(2, 4);
	r = Ombrelloni(10, 25);
	r = Ombrelloni(-1, 1);
	r = Ombrelloni(9, -2);
	return 0;
}