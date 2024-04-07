#include <stdlib.h>

extern void encrypt(char* s, unsigned int n);

int main(void) {

	const char s_c[] = "Trasforma la stringa";
	char* s = calloc(21, 1);
	for (size_t i = 0; i < 21; ++i) {
		s[i] = s_c[i];
	}

	encrypt(s, 21);

	return 0;
}