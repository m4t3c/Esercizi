#include "righe.h"

int main(void) {

	FILE* f = fopen("file2.txt", "r");
	unsigned int res = conta_righe(f);
	fclose(f);

	return 0;
}