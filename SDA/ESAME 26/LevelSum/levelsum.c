#include "tree.h"

static int LevelSumRec(const Node* t, int level, int i) {

	if (i == level) {
		if (TreeIsEmpty(t)) {
			return 0;
		}
		else
		{
			return t->value;
		}
	}

	return LevelSumRec(TreeLeft(t), level, i + 1) + LevelSumRec(TreeRight(t), level, i + 1);
}

int LevelSum(const Node* t, size_t level) {

	if (TreeIsEmpty(t)) {
		return 0;
	}

	return LevelSumRec(t, (int)level, 0);
}