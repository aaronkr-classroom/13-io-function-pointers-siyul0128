// fprintf.c
#include <stdio.h>

int main(void) {

	char* string = "H";
	short int data = 0x0; // 16진수

	// 쓰기 모드로 텍스트 파일을 열기
	FILE* p_file = fopen("nums.txt", "wt");

	if (NULL != p_file) {
		for (int i = 410; i < 430; i++) {
			if (i % 3 == 0) {
				fprintf(p_file, "\n");
			}
			fprintf(p_file, "%d", i);
		}
		

		printf("파일 내용을 이렇게 썼어요~!");

		fclose(p_file);
	}
}