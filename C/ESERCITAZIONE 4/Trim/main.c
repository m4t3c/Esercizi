#include <stdio.h>

extern char* trim(const char* s);

int main(void) {
	char* s = trim("    "); // 24 -> 20
	printf("%s", s);

	return 0;
}