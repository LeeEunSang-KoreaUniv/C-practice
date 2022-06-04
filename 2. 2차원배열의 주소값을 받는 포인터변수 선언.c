#include <stdio.h>

int main() {
	char(*pa)[10]; // 2차원배열의 포인터 변수
	char* pb[10]; // 포인터 배열
	char arr[3][10];
	pa = arr;

	char* parr;
	char tm[10];
	parr = tm;
	

	printf("%d %d \n", sizeof(pa), sizeof(*pb));
	printf("%d %d", sizeof(pb), sizeof(*pb));
}