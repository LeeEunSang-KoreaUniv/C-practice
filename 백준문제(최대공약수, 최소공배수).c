#include <stdio.h>

int main() {
	int a, b;
	int t;
	while (1) {
		printf("정수 입력 : ");
		scanf("%d %d", &a, &b);
		if (a > 0 && a < 10000 && b>0 && b < 10000) {
			if (a < b) {
				t = a;
				a = b;
				b = t;
			}
			break;
		}
		else {
			printf("정수는 0보다 크고 10000보다 작은 수로 입력해주세요. \n");
		}
	}
	int G, L;
	for (int i = 1; i <= b; i++) {
		if ((a % i == 0) && (b % i == 0)) {
			G = i;
		}
	}
	L = G * (a / G) * (b / G);
	printf("최대공약수 : %d, 최소공배수 : %d", G, L);

	return 0;
}