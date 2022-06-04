#include <stdio.h>
#include<stdlib.h>

typedef struct {
	int width;
	int height;
} Area;

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
	// �����Ҵ��� Ȱ���� 2�����迭 �����ϱ�  -> �ӵ��� ���̰�ʹٸ� �׳� �˳��� ũ���� �迭�� �����ض�!!

	//��� 1)
	   //����
	int** k = (int**) malloc (sizeof(int*) * area1.height);
	for (int i = 0; i < area1.height; i++) {
		k[i] = (int*)malloc(sizeof(int) * area1.width);
	}
	  //����
	for (int i = 0; i < area1.height; i++) {
		free(k[i]);
	}
	free(k);


	
/*	//��� 2)
	  //����
	int** arr;
	arr = (int**)malloc(sizeof(int*) * area1.height);
	arr[0] = (int*)malloc(sizeof(int) * area1.width * area1.height);
	for (int i = 1; i < area1.height; i++) {
		arr[i] = arr[i - 1] + area1.width;
	}
      //����
	free(arr[0]);
	free(arr);
	*/


	return 0;
}