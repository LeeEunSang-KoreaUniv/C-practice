#include <stdio.h>

int main() {

	int num = 0;
	while (1) {
		printf("Enter the number: ");
		scanf_s("%d", &num);
		if (num > 0) {
			break;
		}
		else {
			printf("�ڿ����� �Է����ּ���. ");
		}
	}
	int sum = 0;
	printf("%d�� ���� ���: ", num);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			sum += i;
			printf("%d ", i);
		}
	}
	sum -= num;
	if (sum == num) {
		printf("\n=> %d��(��) �������Դϴ�.", num);
	}
	else {
		printf("\n=> %d��(��) �������� �ƴմϴ�.", num);
	}

	return 0;
}
