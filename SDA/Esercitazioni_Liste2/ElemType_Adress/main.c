#include "elemtype.h"

int main(void) {

	ElemType test = {
		.name = "Gianfilippo",
		.street = "Giacomo Merda",
		.number = 69,
		.city = "Napoli",
		.province = "Na",
		.postal_code = "80144"
	};
	ElemWriteStdout(&test);

	return 0;
}