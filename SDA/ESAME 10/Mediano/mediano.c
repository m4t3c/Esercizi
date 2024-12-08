#include "tree.h"
#include <float.h>

static int CountNodes(const Node* t) {
	if (t == NULL) {
		return 0;
	}

	return 1 + CountNodes(t->left) + CountNodes(t->right);
}

static const Node* FindKNode(const Node* t, int* k) {


}

double Mediano(const Node* t) {

	if (TreeIsEmpty(t)) {
		return DBL_MAX;
	}

	int n = CountNodes(t);
	int m = (n + 1) / 2;

}