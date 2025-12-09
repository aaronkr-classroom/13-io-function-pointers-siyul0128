// fgets.c
#include <stdio.h>

int main(void) {
	char temp[500];
	FILE* p_file = fopen("long.md", "rt");
	if (NULL != p_file) {
		while (NULL != fgets(temp, sizeof(temp), p_file)) {
			printf("%s", temp);

		}
		fclose(p_file);
	}
	return 0;
}