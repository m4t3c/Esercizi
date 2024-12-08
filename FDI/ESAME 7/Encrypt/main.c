#include <stdlib.h>

extern void encrypt(char* s, unsigned int n);

int main(void) {

	char s[] = "Odio il giustospirito";
	encrypt(s, 22);

	return 0;
}