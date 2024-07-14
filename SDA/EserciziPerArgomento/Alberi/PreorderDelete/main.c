#include "tree.h"

extern void TreePreOrderDelete(Node* t);

int main(void) {

	ElemType data[] = { 0, 1, 2, 3, 4 };
	Node* t = TreeCreateRoot(&data[0],
					TreeCreateRoot(&data[1],
						TreeCreateRoot(&data[4], NULL, NULL),
						TreeCreateRoot(&data[2], NULL, NULL)),
					TreeCreateRoot(&data[3], NULL, NULL));
	TreePreOrderDelete(t);

	return 0;
}