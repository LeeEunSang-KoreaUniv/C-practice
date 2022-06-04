#include <stdio.h>
#include <stdlib.h>


int main() {
	int n1, n2;
	printf("Enter Vertical Lenth: ");
	scanf_s("%d", &n1);
	printf("Enter Horizontal Lenth: ");
	scanf_s("%d", &n2);

	int** ptr = malloc(sizeof(int*) * n1);
	if (ptr != NULL) {
		for (int i = 0; i < n1; i++) {
			*(ptr + i) = malloc(sizeof(int) * n2);
			}
		
		
		for (int i = 0; i < n1; i++) {
			for (int j = 0; j < n2; j++) {
				if (*(ptr + i) != NULL) {
					*(*(ptr + i) + j) = i + j;
				}
			}
		}
		for (int i = 0; i < n1; i++) {
			printf("\n%d ¹øÂ° Array: ", i+1);
			for (int j = 0; j < n2; j++) {
				if (*(ptr + i) != NULL) {
					printf("%d ", *(*(ptr + i) + j));
				}
			}
			free(*(ptr + i));
		}
		free(ptr);
	}
	return 0;
} 