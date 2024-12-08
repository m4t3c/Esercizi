#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int ContaOccorrenze(const char* filename, const char* str);

int main(void) {

	int r = ContaOccorrenze("nonesisto.txt", "godo");

	return 0;
}