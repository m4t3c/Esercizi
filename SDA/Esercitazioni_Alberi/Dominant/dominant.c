#include "tree.h"

static void CountDominantRec(const Node* t, int* res) {

	if (TreeIsLeaf(t)) {
		return;
	}

	int sx = 0;
	int dx = 0;

	if (!TreeIsEmpty(t->left)) {
		sx = t->left->value;
	}

	if (!TreeIsEmpty(t->right)) {
		dx = t->right->value;
	}

	if (t->value > (sx + dx)) {
		(*res)++;
	}

	CountDominantRec(TreeLeft(t), res);
	CountDominantRec(TreeRight(t), res);
}

int CountDominant(const Node* t) {

	int res = 0;
	CountDominantRec(t, &res);

	return res;
}