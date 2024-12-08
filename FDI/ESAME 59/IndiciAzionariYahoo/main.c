#include "finance.h"

int main(void) {

	size_t n = 0;
	struct value* res = read_historical_series("BPE.MI.csv", &n);

	return 0;
}