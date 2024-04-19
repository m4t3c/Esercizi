#include <stdlib.h>
#include <stdio.h>

struct person {
char name[256];
unsigned int age;
};

void person_read(FILE* f, struct person* pp);

int main(void) {

	FILE* f = fopen("person1.txt", "r");
	struct person* pp = calloc(1, sizeof(struct person));

	person_read(f, pp);

	return 0;
}