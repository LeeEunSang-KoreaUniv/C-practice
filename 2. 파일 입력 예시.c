#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	FILE* fp = fopen("hellow world.txt", "rt");
	if (fp == NULL) {
		printf("파일 오픈 실패!");
		return -1;
	}
	char ch[50];
	for (int i = 0; i < 3; i++) {
		fgets(ch, sizeof(ch), fp);
		printf("%s", ch);
	}
	fclose(fp);
	
	return 0;
}