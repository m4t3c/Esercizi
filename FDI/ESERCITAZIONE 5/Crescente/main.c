#include <stdlib.h>
#include <stdbool.h>

extern bool crescente(unsigned int x);

int main(void) {
	
	bool r;
	r = crescente(123);
	r = crescente(5);
	r = crescente(124);

	return 0;
}