#include "list.h"

extern Item* ListLoad(const char* filename);

int main(void) {

	Item* mylist = ListLoad("data_00.txt");
	ListWriteStdout(mylist);

	return 0;
}