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
			printf("N�� 1�̻�, 10000������ �����̾���մϴ�. �ٽ� �Է����ּ���! \n");
		}
	}
	while (1) {
		printf("X = ");
		scanf_s("%d", &x);
		if (x >= 1 && x <= 10000) {
			break;
		}
		else {
			printf("X�� 1�̻�, 10000������ �����̾���մϴ�. �ٽ� �Է����ּ���! \n");
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
				printf(" (a(n)�� 1�̻�, 10000������ �����̾���մϴ�. �ٽ� �Է����ּ���!),");
			}
		}			
	}
	printf("x���� ���� ��: ");
	for (int j = 0; j < num; j++) {
		if (arr[j] < x) {
			printf("%d ", arr[j]);
		}
	}
	return 0;
}
