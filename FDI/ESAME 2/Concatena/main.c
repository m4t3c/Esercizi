#include <stdlib.h>

extern char* concatena(const char* s1, const char* s2);

int main(void) {
	char* r = NULL;
	
	r = concatena("prova", "test");
	r = concatena("arma", "dillo");

	return 0;
}