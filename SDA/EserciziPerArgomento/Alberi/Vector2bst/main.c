#include "tree.h"

extern Node* Vector2Bst(const ElemType* v, size_t v_size);

int main(void) {
	ElemType v[] = { 8, 2, 4, 5, 2, 1, 9 };
	Node* t = Vector2Bst(v, 7);

	return 0;
}