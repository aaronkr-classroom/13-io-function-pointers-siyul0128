// fseek.c
#include <stdio.h>

int main(void) {
	int file_size = 0;
	FILE* p_file1 = fopen("fprintf.c", "rb");
	FILE* p_file2 = fopen("fscanf.c", "rb");
	FILE* p_file3 = fopen("fgets.c", "rb");
	FILE* p_file4 = fopen("fwrite.c", "rb");
	FILE* p_file5 = fopen("fread.c", "rb");
	FILE* p_file6 = fopen("fseek.c", "rb");
	char* winner;

	if (NULL != p_file1) {
		fseek(p_file1, 0, SEEK_END); // 파일의 끝으로 이동
		if (file_size < ftell(p_file1)) {
			file_size < ftell(p_file1); // 현재 위치로 파일의 크기'
			winner = "fprintf.c";
		}
		fclose(p_file1);
	}
		if (NULL != p_file2) {
			fseek(p_file2, 0, SEEK_END); // 파일의 끝으로 이동
			if (file_size < ftell(p_file2)) {
				file_size < ftell(p_file2); // 현재 위치로 파일의 크기'
				winner = "fscanf.c";
			}
			fclose(p_file2);
		}
			if (NULL != p_file3) {
				fseek(p_file3, 0, SEEK_END); // 파일의 끝으로 이동
				if (file_size < ftell(p_file3)) {
					file_size < ftell(p_file3); // 현재 위치로 파일의 크기'
					winner = "fgets.c";
				}
				fclose(p_file3);
			}
			if (NULL != p_file4) {
				fseek(p_file4, 0, SEEK_END); // 파일의 끝으로 이동
				if (file_size < ftell(p_file4)) {
					file_size < ftell(p_file4); // 현재 위치로 파일의 크기'
					winner = "fwrite.c";
				}
				fclose(p_file4);
			}
			if (NULL != p_file5) {
				fseek(p_file5, 0, SEEK_END); // 파일의 끝으로 이동
				if (file_size < ftell(p_file5)) {
					file_size < ftell(p_file5); // 현재 위치로 파일의 크기'
					winner = "fread.c";
				}
				fclose(p_file4);
			}
			if (NULL != p_file6) {
				fseek(p_file4, 0, SEEK_END); // 파일의 끝으로 이동
				if (file_size < ftell(p_file6)) {
					file_size < ftell(p_file6); // 현재 위치로 파일의 크기'
					winner = "fseek.c";
				}
				fclose(p_file6);
			}

			printf("Largest file: %s - Size: %d", winner, file_size);

	return 0;
}