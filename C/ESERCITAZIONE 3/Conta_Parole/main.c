#include <stdlib.h>

extern size_t conta_parole(const char* s);

int main(void) {
	size_t n;

	n = conta_parole("quanti spazi ci sono");
	n = conta_parole("e quì invece?");
	n = conta_parole("quì ce ne sono tantissimi davvero davvero tanti ");

	return 0;
}