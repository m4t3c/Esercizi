#include <stdbool.h>

extern bool IsPalindromo(const char* str);

int main(void) {

	bool r = IsPalindromo("osso");
	r = IsPalindromo("");

	return 0;
}