#include <stdlib.h>

struct dado
{
	char l1, l2;
};

int tokyo_confronta(char a[2], char b[2]) {

	if (a == NULL || b == NULL) {
		return 0;
	}

	struct dado al = { a[0], a[1] };
	struct dado bl = { b[0], b[1] };
	char av = 0;

	if (al.l1 < 1 || al.l1 > 6 || al.l2 < 1 || al.l2 > 6) {
		return 0;
	}

	if (bl.l1 < 1 || bl.l1 > 6 || bl.l2 < 1 || bl.l2 > 6) {
		return 0;
	}
	
	if (al.l1 > al.l2) {
		av = (al.l1 * 10) + al.l2;
	}
	else
	{
		av = (al.l2 * 10) + al.l1;
	}
	char bv = 0;
	if (bl.l1 > bl.l2) {
		bv = (bl.l1 * 10) + bl.l2;
	}
	else
	{
		bv = (bl.l2 * 10) + bl.l1;
	}

	if (av == bv) {
		return 0;
	}

	else if (av == 21) {
		return 1;
	}

	else if (bv == 21) {
		return -1;
	}

	else if (av % 11 == 0 && bv % 11 != 0) {
		return 1;
	}

	else if (av % 11 != 0 && bv % 11 == 0) {
		return -1;
	}

	else if (av % 11 == 0 && bv % 11 == 0) {
		if (av > bv) {
			return 1;
		}
		else
		{
			return -1;
		}
	}

	else if (av % 11 != 0 && bv % 11 != 0) {
		if (av > bv) {
			return 1;
		}
		else
		{
			return -1;
		}
	}

	return 0;
}