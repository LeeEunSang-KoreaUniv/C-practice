#include <stdio.h>

int main() {
	int a, b;
	int t;
	while (1) {
		printf("���� �Է� : ");
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
			printf("������ 0���� ũ�� 10000���� ���� ���� �Է����ּ���. \n");
		}
	}
	int G, L;
	for (int i = 1; i <= b; i++) {
		if ((a % i == 0) && (b % i == 0)) {
			G = i;
		}
	}
	L = G * (a / G) * (b / G);
	printf("�ִ����� : %d, �ּҰ���� : %d", G, L);

	return 0;
}