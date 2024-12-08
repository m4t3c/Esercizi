#include <stdlib.h>
#include <stdint.h>
#include <string.h>

typedef struct
{
	size_t size;
	char* data;
} String;

typedef struct {
	size_t capacity;
	size_t size;
	String* data;
}Vector;

String StringCopy(const String* e) {
	String res = { .size = e->size };
	res.data = malloc(e->size);
	memcpy(res.data, e->data, res.size);

	return res;
}

int StringCompare(const String* a, const String* b) {
	for (size_t i = 0; i < a->size && i < b->size; ++i) {
		if (a->data[i] < b->data[i]) {
			return -1;
		}
		else if (a->data[i] > b->data[i])
		{
			return 1;
		}
	}

	if (a->size < b->size) {
		return -1;
	}
	else if (a->size > b->size)
	{
		return 1;
	} 

	return 0;
}

void PushBack(Vector* v, const String *e) {
	if (v->size == v->capacity) {
		v->capacity *= 2;
		v->data = realloc(v->data, v->capacity * sizeof(String));
	}

	v->data[v->size] = StringCopy(e);
	++v->size;
}

void Swap(String * a, String* b) {
	String tmp = *a;
	*a = *b;
	*b = tmp;
}

void NaiveSort(Vector* v) {
	for (int i = 0; i < v->size; ++i) {
		size_t minpos = i;
		for (int j = i + 1; j < v->size; ++j) {
			if (StringCompare(v->data + j, v->data + minpos) < 0) {
				minpos = j;
			}
		}
		if (i != minpos) {
			Swap(v->data + i, v->data + minpos);
		}
	}
}

int main(void) {

	Vector v = { .capacity = 1, .size = 0, .data = malloc(sizeof(int)) };

	String arr[] = { {6, "parola"}, {5, "mamma"}, {5, "gatto"}, {7, "gattino"} };

	for (int i = 0; i < 4; ++i) {
		PushBack(&v, rand());
	}

	NaiveSort(&v);

	free(v.data);
	return 0;
}