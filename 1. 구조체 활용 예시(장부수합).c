#include <stdio.h>
#include <string.h>


typedef struct {
	char name[20];
	char lnum[20];
	int pay;
} Employee;

int main() {
	
	Employee man1;
	printf("�̸�: "); scanf_s("%s", man1.name, 20);
	printf("�ֹι�ȣ: "); scanf_s("%s", man1.lnum, 20);
	printf("�޿�: "); scanf_s("%d", &man1.pay);

	printf("�̸�: %s \n", man1.name);
	printf("�ֹι�ȣ: %s \n", man1.lnum);
	printf("�޿�: %d", man1.pay);
	return;
}

