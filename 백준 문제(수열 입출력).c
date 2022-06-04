#include <stdio.h>

int main() {
	int num, x;
	while (1) {
		printf("N = ");
		scanf_s("%d", &num);
		if (num >= 1 && num <= 10000) {
			break;
		}
		else {
			printf("N은 1이상, 10000이하의 정수이어야합니다. 다시 입력해주세요! \n");
		}
	}
	while (1) {
		printf("X = ");
		scanf_s("%d", &x);
		if (x >= 1 && x <= 10000) {
			break;
		}
		else {
			printf("X는 1이상, 10000이하의 정수이어야합니다. 다시 입력해주세요! \n");
		}
	}
	int arr[1000], a;
	for (int i = 0; i < num; i++){
		while (1) {
			printf(" a(%d) = ", i+1);
			scanf_s("%d", &a);
			if (a >= 1 && a <= 10000) {
				arr[i] = a;
				break;
			}
			else{
				printf(" (a(n)은 1이상, 10000이하의 정수이어야합니다. 다시 입력해주세요!),");
			}
		}			
	}
	printf("x보다 작은 수: ");
	for (int j = 0; j < num; j++) {
		if (arr[j] < x) {
			printf("%d ", arr[j]);
		}
	}
	return 0;
}
