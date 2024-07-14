#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Studente
{
	char name[21];
};

static bool Verifica(struct Studente* vcurr, int vcurr_size, struct Studente* tocheck) {
	for (int i = 0; i < vcurr_size; ++i) {
		bool a = vcurr[i].name[0] == tocheck->name[0];
		bool b = (vcurr[i].name[0] == tocheck->name[0] + 1) || (vcurr[i].name[0] == tocheck->name[0] - 1);
		if (a || b) {
			return false;
		}
	}

	return true;
}

static void GruppiNoRepRec(struct Studente* stud, int n, int i, size_t k, struct Studente* vcurr, int vcurr_size, int* nsol) {

	if (vcurr_size == n) {
		printf("{ %s", vcurr[0].name);
		for (int j = 1; j < vcurr_size; ++j) {
			printf(", %s", vcurr[j].name);
		}
		printf(" }\n");
		(*nsol)++;
		return;
	}
	if (i >= k) {
		return;
	}

	if (Verifica(vcurr, vcurr_size, stud + i)) {
		strcpy(vcurr[vcurr_size].name, stud[i].name);
		GruppiNoRepRec(stud, n, i + 1, k, vcurr, vcurr_size + 1, nsol);
	}

	GruppiNoRepRec(stud, n, i + 1, k, vcurr, vcurr_size, nsol);
	
}

int GruppiNoRep(const char* filename, int n) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return 0;
	}

	struct Studente* stud = NULL;
	size_t k = 0;
	while (1) {
		stud = realloc(stud, (k + 1) * sizeof(struct Studente));
		if (fscanf(f, "%20s", stud[k].name) != 1) {
			stud = realloc(stud, k * sizeof(struct Studente));
			break;
		}
		++k;
	}

	if (n < 1 || k < n) {
		fclose(f);
		free(stud);
		return 0;
	}

	struct Studente* vcurr = malloc(k * sizeof(struct Studente));
	int nsol = 0;
	GruppiNoRepRec(stud, n, 0, k, vcurr, 0, &nsol);

	free(stud);
	free(vcurr);
	fclose(f);

	return nsol;
}
