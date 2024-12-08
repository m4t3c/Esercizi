#include "angoli.h"

int main(void) {

	struct angolo a = { 230, 23, 4 };
	struct angolo b = { 45, 47, 12 };
	struct angolo res = differenza_angoli(a, b);


	return 0;
}