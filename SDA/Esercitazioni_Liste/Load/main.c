#include "list.h"

Item* ListLoad(const char* filename);

int main(void) {

	Item* res = ListLoad("data_00.txt");

	ListWriteStdout(res);
	ListDelete(res);

	return 0;
}