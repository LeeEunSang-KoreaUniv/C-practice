#include <stdio.h>

int main() {
	int year;
	while (1) {
		printf("�⵵ �Է�: ");
		scanf_s("%d", &year);
		if (0 < year && year < 10000) {
			break;
		}
		else {
			printf("������ 1�̻�, 10000�̸��� �����̾���մϴ�. ���Է��ϼ���. ");
		}
	}
	if ((year % 4) == 0){
	    if (year < 100) {
			printf("%d���� �����Դϴ�.", year);
	    }
		else if (100 <= year && year < 400) {
			if (year % 100 == 0) {
				printf("%d���� ������ �ƴմϴ�.", year);
			}
			else {
				printf("%d���� �����Դϴ�.", year);
			}
		}
		else {
			if ((year % 400 == 0) || (year % 100 != 0)) {
				printf("%d�� �����Դϴ�.", year);
			}
			else {
				printf("%d�� ������ �ƴմϴ�.", year);
			}
		}
	}
	else {
		printf("%d�� ������ �ƴմϴ�.", year);
	}
	return 0;
}