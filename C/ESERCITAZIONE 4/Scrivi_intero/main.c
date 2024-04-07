#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

extern bool scrivi_intero(const char* filename, int i);

int main(void) {

	bool r;
	r = scrivi_intero("prova.txt", 22);
	r = scrivi_intero("prova.txt", 1989);
	r = scrivi_intero("prova.txt", 55);

	return 0;
}