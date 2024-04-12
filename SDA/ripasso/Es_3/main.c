#include <stdlib.h>

extern void ToUpper(char* str);

int main(void) {

	char str[] = "rendi maiuscola la stringa";

	ToUpper(str);

	return 0;
}
