#include "decode.h"

int main(void) {

	FILE* f = fopen("file4.txt", "r");
	decode(f);
	fclose(f);
	
	return 0;
}