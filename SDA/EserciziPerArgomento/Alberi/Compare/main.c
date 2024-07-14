#include "tree.h"

extern bool TreeAreIdentical(const Node* t1, const Node* t2);

int main(void) {

	ElemType data[] = { 0, 1, 2, 3, 4, 5 };
	Node* t1 = TreeCreateRoot(&data[0],
		TreeCreateRoot(&data[1], NULL, NULL),
		TreeCreateRoot(&data[2], NULL, NULL));
	Node* t2 = TreeCreateRoot(&data[0],
		TreeCreateRoot(&data[1], NULL, NULL),
		TreeCreateRoot(&data[3], NULL, NULL));

	bool r = TreeAreIdentical(t1, t2);

	return 0;
}