#include "lettura.h"

int main(void) {

	FILE* f = fopen("file1.txt", "r");
	char* res = fgets_malloc(f);
	fclose(f);

	return 0;
}