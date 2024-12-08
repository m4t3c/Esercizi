#include "tree.h"

#include "tree.h"

extern int TreeHeight(const Node* t);

int main(void) {

	ElemType e[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	Node* t = TreeCreateRoot(&e[5],
		TreeCreateRoot(&e[1],
			TreeCreateRoot(&e[4], NULL, NULL),
			TreeCreateRoot(&e[2],
				NULL,
				TreeCreateRoot(&e[0],
					NULL,
					TreeCreateRoot(&e[6], NULL, NULL)))),
		TreeCreateRoot(&e[3], NULL, NULL));
	int h = TreeHeight(t);

	return 0;
}