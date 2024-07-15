#include <stdlib.h>
extern char** extract_parole(const char* filename, size_t* n);

int main(void) {

	size_t n = 0;
	char** res = extract_parole("file01.txt", &n);
	return 0;
}