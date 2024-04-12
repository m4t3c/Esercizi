#include <stdlib.h>
#include <stdint.h>

typedef struct {
	size_t capacity;
	size_t size;
	int* data;
}Vector;

void PushBack(Vector* v, int e) {
	if (v->size == v->capacity) {
		v->capacity *= 2;
		v->data = realloc(v->data, sizeof(int) * v->capacity);
	}
	
};

int main(void) {
	Vector v = { .capacity = 1, .size = 0, .data = malloc(sizeof(int)) };

	srand(0);
	for (int i = 0; i < 10; ++i) {
		PushBack(&v, rand());
	}

	free(v.data);
	return 0;
}