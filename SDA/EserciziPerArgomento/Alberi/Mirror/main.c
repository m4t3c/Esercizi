#include "tree.h"
#include <stdbool.h>

extern bool TreeIsMirror(Node* t);

int main(void) {

	ElemType data[] = { 0, 1, 2, 3 , 4 };
	Node* t = TreeCreateRoot(&data[0],
			TreeCreateRoot(&data[1],
				TreeCreateRoot(&data[4], NULL, NULL),
				TreeCreateRoot(&data[2], NULL, NULL)),
			TreeCreateRoot(&data[1],
				TreeCreateRoot(&data[2], NULL, NULL),
				TreeCreateRoot(&data[4], NULL, NULL)));
	bool r = TreeIsMirror(t);

	return 0;
}
