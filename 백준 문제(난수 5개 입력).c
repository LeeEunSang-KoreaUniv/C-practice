#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("난수의 범위: 0부터 %d까지 \n", RAND_MAX);
	int i, j=0;
	while (1) {
		i = rand();
		if (i < 99) {
			printf("난수 입력: %d \n", i);
			j = j++;
		}
		if (j == 5) {
			break;
		}
	}
	return 0;
}