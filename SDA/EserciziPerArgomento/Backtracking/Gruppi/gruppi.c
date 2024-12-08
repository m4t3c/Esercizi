#define  _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Studente {
	char name[21];
};

static bool Verifica(struct Studente* vcurr, int vcurr_size, struct Studente* tochechk) {
	if (vcurr_size == 0) {
		return 1;
	}

	for (int i = 0; i < vcurr_size; ++i) {
		bool a = vcurr[i].name[0] == tochechk->name[0];
		bool b = (vcurr[i].name[0] == tochechk->name[0] + 1) || (vcurr[i].name[0] == tochechk->name[0] - 1);
		if (a || b) {
			return false;
		}
	}

	return true;
}

static void GruppiRec(int n, int i, struct Studente* stud, size_t k, struct Studente* vcurr, int* nsol) {
	if (i == n) {
		printf("{ %s", vcurr[0].name);
		for (int j = 1; j < n; ++j) {
			printf(", %s", vcurr[j].name);
		}
		printf(" }\n");
		++(*nsol);
		return;
	}

	for (size_t j = 0; j < k; ++j) {
		if (Verifica(vcurr, i, stud + j)) {
			strcpy(vcurr[i].name, stud[j].name);
			GruppiRec(n, i + 1, stud, k, vcurr, nsol);
		}
	}
}

int Gruppi(const char* filename, int n) {

	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return 0;
	}

	struct Studente* stud = malloc(sizeof(struct Studente));
	size_t k = 0;//dimensione della struct
	while (1) {
		stud = realloc(stud, sizeof(struct Studente) * (k + 1));
		if (fscanf(f, "%20s", stud[k].name) != 1) {
			stud = realloc(stud, sizeof(struct Studente) * k);
			break;
		}
		++k;
	}

	fclose(f);

	if (k < n) {
		free(stud);
		return 0;
	}

	struct Studente* vcurr = malloc(k * sizeof(struct Studente));
	int nsol = 0;

	GruppiRec(n, 0, stud, k, vcurr, &nsol);

	free(stud);
	free(vcurr);

	return nsol;
}