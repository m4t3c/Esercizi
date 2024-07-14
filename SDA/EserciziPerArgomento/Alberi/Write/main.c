#include "tree.h"

extern Node* TreeRead(const char* filename);
extern bool TreeWrite(const Node* t, const char* filename);

int main(void) {

	Node* t = TreeRead("albero_01.txt");

	bool r = TreeWrite(t, "output.txt");

	return 0;
}