#include <stdlib.h>

extern void itob(unsigned int x, char *sz, size_t n);

int main() {

	char *sz = malloc(9*sizeof(char));
	itob(10, sz, 9);
	
	return 0;
}