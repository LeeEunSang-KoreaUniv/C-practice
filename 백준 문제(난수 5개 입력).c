#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("������ ����: 0���� %d���� \n", RAND_MAX);
	int i, j=0;
	while (1) {
		i = rand();
		if (i < 99) {
			printf("���� �Է�: %d \n", i);
			j = j++;
		}
		if (j == 5) {
			break;
		}
	}
	return 0;
}