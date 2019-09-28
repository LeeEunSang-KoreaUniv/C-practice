#include <stdio.h>
#include<stdlib.h>

typedef struct {
	int width;
	int height;
} Area;

int k[100][100];

int main() {
	Area area1;
	while (1) {
		printf("���� ���� ����: ");
		scanf_s("%d", &area1.width);
		printf("���� ���� ����: ");
		scanf_s("%d", &area1.height);

		if (3 <= area1.width && area1.width <= 100 && 3 <= area1.height && area1.height <= 100) {
			break;
		}
		else {
			printf(" (���� ���̴� ����, ���� ���̴� ��� 3�̻� 100���� �̾���մϴ�! ���Է����ּ���.) \n");
		}
	}
	printf("\n");
	Area area2;
	while (1) {
		printf("���� ���� ����: ");
		scanf_s("%d", &area2.width);
		printf("���� ���� ����: ");
		scanf_s("%d", &area2.height);
		if (1 <= area2.width && area2.width <= area1.width && 1 <= area2.height && area2.height <= area1.height) {
			break;
		}
		else {
			printf(" (���� ���̴� ���� ���̴� 1�̻� %d����, ���� ���̴� 1�̻� %d���� �̾���մϴ�! ���Է����ּ���.) \n", area1.width, area1.height);
		}
	}
	printf("\n����� �Է� (%d x %d) \n", area1.width, area1.height);
	for (int j = 0; j < area1.height; j++) {
		printf("%d��° ��: ", j + 1);
		for (int i = 0; i < (area1.width); i++) {
			scanf_s("%d", &(k[j][i])); //%d ������ �����̽��� ������ ���� �Է¹����Ƿ� �ȵ� -> �׳� �ݺ������� scanf ������ ������� �Է����� ���� �˸°� �־��ָ� ��. �����ϰ� ���� ����
		}
	}
	int ksum=0, maxksum = 0; //maxksum�� ��������� �ִ� 
	int xpos=0, ypos=0;
	//�ϴ� ���� ���������� ����ش�.
	for (int j = 0; j < (area1.height - area2.height + 1); j++) {
		for (int i = 0; i < (area1.width - area2.width + 1); i++) {
			//�������� �������� ���� ������� ������ ���Ѵ�.
			for (int y = 0; y < area2.height; y++) { 
				for (int x = 0; x < area2.width; x++) {
					ksum += k[j + y][i + x];
				}
			}
			if (ksum > maxksum) {
				maxksum = ksum;
				xpos = i; ypos = j;
			}
			ksum = 0; //�������� �ٲٱ� ���� ksum���� �ٽ� 0���� �ʱ�ȭ ���ش�.
		}
	}
	printf("\n***���� ������� ���� �ִ�: %d *** \n", maxksum);
	printf("\n<������� ���� ���� ��> \n");
	for (int q = 0; q < area2.height; q++) {
		printf("  ");
		for (int p = 0; p < area2.width; p++) {
			printf("%d ", k[ypos + q][xpos + p]);
		}
		printf("\n");
	}

 	return 0;
}