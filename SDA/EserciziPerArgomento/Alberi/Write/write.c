#include "tree.h"

static void TreeWriteRec(const Node* t, FILE* f, int d) {
	if (TreeIsLeaf(t)) {
		fprintf(f, "%*s", 4 * d, "");
		fprintf(f, ".%c\n", *TreeGetRootValue(t));
		return;
	}
	else
	{
		fprintf(f, "%*s", 4 * d, "");
		fprintf(f, "%c\n", *TreeGetRootValue(t));
	}

	TreeWriteRec(TreeLeft(t), f, d + 1);
	TreeWriteRec(TreeRight(t), f, d + 1);
}

bool TreeWrite(const Node* t, const char* filename) {

	FILE* f = fopen(filename, "w");
	if (f == NULL) {
		return false;
	}
	if (TreeIsEmpty(t)) {
		fclose(f);
		return false;
	}

	TreeWriteRec(t, f, 0);
	fclose(f);
	return true;
}