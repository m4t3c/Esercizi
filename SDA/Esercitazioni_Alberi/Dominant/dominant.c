#include "tree.h"

static void CountDominantRec(const Node* t, int* count) {

	if (TreeIsLeaf(t)) {
		return;
	}

	int sx = 0;
	int dx = 0;

	if (!TreeIsEmpty(TreeLeft(t))) {
		sx = t->left->value;
	}
	if (!TreeIsEmpty(TreeRight(t))) {
		dx = t->right->value;
	}

	if (t->value > sx + dx) {
		(*count)++;
	}

	CountDominantRec(TreeLeft(t), count);
	CountDominantRec(TreeRight(t), count);
}

int CountDominant(const Node* t) {

	int count = 0;

	CountDominantRec(t, &count);

	return count;
}