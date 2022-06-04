#include <stdio.h>
#include <stdlib.h>

void blankmaker(int num) {
	for (int i = 0; i < num; i++) {
		printf("  ");
	}
}

void starmaker(int num) {
	for (int i = 0; i < num; i++) {
		printf("¢¾");
	}
}
int main() {
	int n;
	printf("Floor of tree: ");
	scanf_s("%d", &n);
	int a = 2 * n - 1;
	for(int i = 1 ; i < n+1 ; i++){
		blankmaker((a - (2 * i - 1)) / 2);
		starmaker(2 * i - 1);
		blankmaker((a - (2 * i - 1)) / 2);
		printf("\n");
	}
	if (n < 7) {
		for (int i = 0; i < n / 2; i++) {
			blankmaker((a - 1) / 2);
			starmaker(1);
			printf("\n");
		}
	}
	else {
		for (int i = 0; i < n / 2; i++) {
			blankmaker((a - 1) / 2 - 1);
			starmaker(3);
			printf("\n");
		}
	}
	return 0;
}