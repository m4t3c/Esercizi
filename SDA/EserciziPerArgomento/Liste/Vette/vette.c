#include "list.h"

int ContaVette(const Item* i) {
	int nvette = 0;

	for (const Item* j = i; j; j = j->next) {
		bool ispeak = true;

		for (const Item* k = j->next; k; k = k->next) {
			if (k->value >= j->value) {
				ispeak = false;
			}
		}

		if (ispeak) {
			++nvette;
		}
	}

	return nvette;
}