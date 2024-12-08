#include "tree.h"

bool PrintLevelRec(const Node* t, int level) {
	
	if (TreeIsEmpty(t)) {
		return false;
	}

	if (level == 0) {
		ElemWriteStdout(TreeGetRootValue(t));
		putchar(' ');
		return true;
	}

	bool l = PrintLevelRec(t->left, level - 1);
	bool r = PrintLevelRec(t->right, level - 1);

	return l || r;
}

void LevelOrder(const Node* t) {
	int height = 0;
	while (PrintLevelRec(t, height)) {
		height++;
	}
}