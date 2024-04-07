#include <stdlib.h>

extern unsigned int conta_spazi(const char* s);

int main(void){
	unsigned int r;
	r = conta_spazi("questa è la stringa di cui voglio sapere il numero di spazi!");

	return 0;
}