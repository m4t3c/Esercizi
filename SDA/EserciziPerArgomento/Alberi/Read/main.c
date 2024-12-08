#include "tree.h"

extern Node* TreeRead(const char* filename);

int main(void) {

	Node* res = TreeRead("albero_01.txt");

	TreeWriteStdoutPreOrder(res);
	return 0;
}