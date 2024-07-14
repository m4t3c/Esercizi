#define _CRT_SECURE_NO_WARNINGS
#include "dataset.h"
#include <stdio.h>
#include <string.h>

struct dataset* dataset_load(const char* filename) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}

	struct dataset* res = malloc(sizeof(struct dataset));
	
	struct row *rows = NULL;
	char buf1[256] = { 0 };
	char buf2[16] = { 0 };
	size_t row_idx = 0;

	while (fscanf(f, " %[^,],%s", buf1, buf2) == 2) {
		++row_idx;
		rows = realloc(rows, row_idx * sizeof(struct row));
		if (strcmp(buf2, "MILD") == 0) {
			rows[row_idx - 1].prognosis = 'M';
		}
		else
		{
			rows[row_idx - 1].prognosis = 'S';
		}
		rows[row_idx - 1].filename = calloc(256, sizeof(char));
		strcpy(rows[row_idx - 1].filename, buf1);
	}

	res->data = rows;
	res->nrows = row_idx;

	fclose(f);
	return res;
}