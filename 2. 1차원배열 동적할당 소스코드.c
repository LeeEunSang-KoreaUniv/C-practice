#include <stdio.h>
#include <stdlib.h>


int main() { // 1차원배열 동적할당 소스코드
	int num;
	printf("Inter input: ");
	scanf_s("%d", &num);

	int* ptr = malloc(sizeof(int) * num);
	if (ptr != NULL) {
		for (int i = 0; i < num; i++) {
			*(ptr + i) = i + 1;
		}
		printf("array: ");
		for (int i = 0; i < num; i++) {
			printf("%d ", *(ptr + i));
		}
		free(ptr);
	}
	return 0;
} 