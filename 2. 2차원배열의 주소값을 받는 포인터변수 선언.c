#include <stdio.h>

int main() {
	char(*pa)[10]; // 2�����迭�� ������ ����
	char* pb[10]; // ������ �迭
	char arr[3][10];
	pa = arr;

	char* parr;
	char tm[10];
	parr = tm;
	

	printf("%d %d \n", sizeof(pa), sizeof(*pb));
	printf("%d %d", sizeof(pb), sizeof(*pb));
}