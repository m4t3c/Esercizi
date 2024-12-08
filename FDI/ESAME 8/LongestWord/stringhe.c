#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>

char* parola_piu_lunga(const char* sz) {
	
	const char* start = NULL;
	const char* max_start = NULL;
	int max_lenght = 0;
	int current_length = 0;
	
	while (*sz != '\0')
	{
		if (*sz != ' ') {
			if (start == NULL) {
				start = sz;
			}
			++current_length;
		}
		else
		{
			if (start != NULL) {
				if (current_length > max_lenght) {
					max_lenght = current_length;
					max_start = start;
				}
				start = NULL;
				current_length = 0;
			}
		}
		++sz;
	}

	if (start != NULL && current_length > max_lenght) {
		max_lenght = current_length;
		max_start = start;
	}

	if (max_start == NULL) {
		return NULL;
	}

	char* res = malloc((max_lenght + 1) * sizeof(char));
	strncpy(res, max_start, max_lenght);
	res[max_lenght] = 0;

	return res;
}