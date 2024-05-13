	#include "list.h"

int main(void) {
	ElemType e[] = { 1, 2, 3, 4, 5, 6 };
	size_t e_size = sizeof(e) / sizeof(ElemType);
	//Item* mylist = NULL;
	Item* mylist = ListCreateEmpty();
	for (size_t i = 0; i < e_size; ++i) {
		mylist = ListInsertHead(e + i, mylist);
	}

	{
		Item* tmp = mylist;
		while (!ListIsEmpty(tmp)) {
			//faccio cose con mylist->value

			mylist = ListGetTail(tmp);
		}
	}
	
	{
		Item* tmp = mylist;
		while (tmp) {
			//faccio cose con mylist->value

			tmp = tmp->next;
		}
	}
	
	{
		for (Item* tmp = mylist; !ListIsEmpty(tmp); tmp = ListGetTail(tmp)) {
			//Faccio cose con mylist->value
		}
	}

	{
		for (Item* tmp = mylist; tmp; tmp = ListGetTail(tmp)) {
			//Faccio cose con mylist->value
		}
	}

	//Bisogna deallocare la memoria con la ListDelete()
	ListDelete(mylist);

	return 0;
}