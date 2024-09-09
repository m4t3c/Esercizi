#include "tree.h"

static int SostituisciSommaRec(Node* t) {
	if (TreeIsEmpty(t)) {
		return 0;
	}

	int sum = 0;
	sum += SostituisciSommaRec(t->left);
	sum += SostituisciSommaRec(t->right);

	t->value += sum;

	return t->value;
}

void SostituisciSomma(Node* t) {

	if (TreeIsEmpty(t)) {
		return;
	}
	
	SostituisciSommaRec(t);

}