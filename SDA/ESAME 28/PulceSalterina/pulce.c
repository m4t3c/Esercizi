#include "pulce.h"
#include <math.h>
#include <stdbool.h>

const Item* CalcolaPercorso(const Item* start, size_t n) {

	if (DListIsEmpty(start)) {
		return NULL;
	}

	if (start->next == NULL && start->prev == NULL) {
		return start;
	}

	int val = 0;
	bool direction;

	while (n > 0) {
		val = start->value;
		if (val == 0) {
			return start;
		}
		else if (val > 0) {
			direction = true;
		}
		else
		{
			direction = false;
		}

		for (int i = 0; i < abs(val); ++i) {
			if (direction && DListGetTail(start) == NULL) {
				direction = false;
			}
			if (!direction && DListGetPrev(start) == NULL) {
				direction = true;
			}
			if (direction) {
				start = DListGetTail(start);
			}
			else
			{
				start = DListGetPrev(start);
			}
			n--;
			if (n == 0) {
				break;
			}
		}
	}

	return start;
}