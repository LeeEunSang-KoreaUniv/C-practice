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
			printf("자연수를 입력해주세요. ");
		}
	}
	int sum = 0;
	printf("%d의 양의 약수: ", num);
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			sum += i;
			printf("%d ", i);
		}
	}
	sum -= num;
	if (sum == num) {
		printf("\n=> %d은(는) 완전수입니다.", num);
	}
	else {
		printf("\n=> %d은(는) 완전수가 아닙니다.", num);
	}

	return 0;
}
