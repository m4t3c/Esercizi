#include <stdbool.h>
#include <stdlib.h>

static bool AToIRec(const char* str, int i, int* res) {
	int c = str[i];

	if (c == 0) {
		return true;
	}

	if (str[i] > '9' || str[i] < '0') {
		return false;
	}

	(*res) = (*res) * 10 + (str[i] - '0');

	return AToIRec(str, i + 1, res);
}

int AToI(const char* str) {
	
	if (str == NULL) {
		return 0;
	}
	int res = 0;
	int sign = str[0] == '-' ? -1 : 1;
	if (str[0] == '-' || str[0] == '+') {
		str = str + 1;
	}

	bool ok = AToIRec(str, 0, &res);

	if (!ok) {
		res = 0;
	}

	return res * sign;
}