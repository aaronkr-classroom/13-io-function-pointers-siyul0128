// fwrite.c
#include <stdio.h>

int main(void) {
	int data1,
		data2,
		data_list[5];
	char* text;
	FILE* p_file = fopen("jin.dat", "rb"); // 또는 "r"

	if (NULL != p_file) {
		fread(&data1, sizeof(int), 1, p_file); // 0x00000412
		fread(&data2, sizeof(data2), 5, p_file); // 100
		fread(&data_list, sizeof(data_list), 1, p_file); // {0, 1, 2, 3, 4}
		// fread(&text, sizeof(text), 1, p_file)

		printf("file data1: &d (0x%%04x\n", data1, data1);
		printf("file data2: %d\n", data2); // 5회 해서... ?
		printf("data_list: { ");
		for (int i = 0; i < 5; i++) {
			printf("%d, ", data_list[i]);
		}
		printf("}");
		// printf("text: %s", text); // ???

		fclose(p_file);
	}
	return 0;
}