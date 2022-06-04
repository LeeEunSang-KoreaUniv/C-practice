#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	FILE* fp = fopen("hellow world.txt", "rt");
	if (fp == NULL) {
		printf("파일 오픈 실패!");
		return -1;
	}
	char* ch;
	ch=fgets(fp);
	printf("%s", ch)
	printf("%s", fgets(fp));
	printf("%s", fgetc(fp));
	printf("%s", fgetc(fp));
	ch=	fgets(fp);
	printf("%s", ch);
	fclose(fp);
	
	return 0;
}