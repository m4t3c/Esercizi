#include "alterna.h"

char* alterna(const char* s1, const char* s2) {

	size_t l1 = strlen(s1);
	size_t l2 = strlen(s2);
	char* res = calloc(l1 + l2 + 1, sizeof(char));
	if (l1 < l2) {
		size_t diff = l2 - l1;
		size_t i1 = 0;
		size_t i2 = 0;
		size_t i = 0;
		for (; i < (l1 + l2) - (diff); ++i) {
			if (i % 2 == 0 || i == 0) {
				res[i] = s1[i2];
				++i2;
			}
			else {
				res[i] = s2[i1];
				++i1;
			}
		}
		while (diff != 0) {
			res[i] = s2[i2];
			++i2;
			++i;
			--diff;
		}
	}
	else
	{
		size_t diff = l1 - l2;
		size_t i1 = 0;
		size_t i2 = 0;
		size_t i = 0;
		for (; i < (l1 + l2) - (diff); ++i) {
			if (i % 2 == 0 || i == 0) {
				res[i] = s1[i1];
				++i1;
			}
			else {
				res[i] = s2[i2];
				++i2;
			}
		}
		while (diff != 0) {
			res[i] = s1[i1];
			++i1;
			++i;
			--diff;
		}
	}

	return res;
}
