#define _CRT_SECURE_NO_WARNINGS
#include "tree.h"

Node* TreeReadRec(FILE* f) {
	ElemType c;
	int read = fscanf(f, " %c", &c);
	if (read != 1) {
		return TreeCreateEmpty();
	}

	if (c == '.') {
		int read = fscanf(f, " %c", &c);
		return TreeCreateRoot(&c, NULL, NULL);
	}

	Node* l = TreeReadRec(f);
	Node* r = TreeReadRec(f);

	return TreeCreateRoot(&c, l, r);
}

Node* TreeRead(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return TreeCreateEmpty();
	}

	Node* t = TreeReadRec(f);
	fclose(f);
	return t;
}