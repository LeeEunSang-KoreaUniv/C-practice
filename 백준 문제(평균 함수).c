#include <stdio.h>


int main()
{
	int row = 0; 
	int col = 0;  
	int matrix[10][10] = { {0,}, {0,} };
	float Ravg[10] = { 0, };
	float Cavg[10] = { 0, };
	while (1) {
		printf("Enter the row and column number: ");
		scanf_s("%d %d", &row, &col);
		if (0 < row && row <= 10 && 0 < col && col <= 10) {
			break;
		}
		else {
			printf("��� ���� ������ 1�̻� 10�����Դϴ�. ���Է����ּ���. \n");
		}
	}
	for (int j = 0; j < row; j++) {
		printf("%d��° �� �Է�: ", j + 1);
		for (int i = 0; i < col; i++) {
			scanf_s("%d", &matrix[j][i]);
		}
	}

	printf("\n<Output>");
	for (int j = 0; j < row; j++) {
		printf("\n%d��° ��: ", j + 1);
		for (int i = 0; i < col;i++) {
			printf("%d   ", matrix[j][i]);
			Ravg[j] += matrix[j][i];
			Cavg[i] += matrix[j][i];
			Cavg[col] += matrix[j][i];
		}
		printf("| Row AVG= %3.1f", Ravg[j]/col);
	}
	printf("\nCol AVG: ");
	for (int i = 0; i < col; i++) {
		printf("%3.1f  ", Cavg[i]/row);
		
	}
	printf("| AVG AVG= %3.1f", Cavg[col]/(row*col));

	return 0;
}
