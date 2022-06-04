#include <stdio.h>
#include <string.h>


typedef struct {
	char name[20];
	char lnum[20];
	int pay;
} Employee;

int main() {
	
	Employee man1;
	printf("이름: "); scanf_s("%s", man1.name, 20);
	printf("주민번호: "); scanf_s("%s", man1.lnum, 20);
	printf("급여: "); scanf_s("%d", &man1.pay);

	printf("이름: %s \n", man1.name);
	printf("주민번호: %s \n", man1.lnum);
	printf("급여: %d", man1.pay);
	return;
}

