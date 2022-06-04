#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num[3];
int input[3];
int vic = 0; // �����͸� �ȹ������ ���������� �����

void inputfuction() {  // ���ڸ� ���� �Է¹޾� �ڸ� ������ �ɰ� �и��Ͽ� �迭�� ���� �����ϴ� �Լ�
	int inputs, a, b, c;
	while (1) {
		printf("Enter 3 numbers: ");
		scanf_s("%d", &inputs); 
		if (99 < inputs && inputs < 1000) { // �� ������ Ȱ��
			a = inputs / 100;
			b = (inputs - a * 100) / 10;
			c = inputs - a * 100 - b * 10;   // ���� ������ִ� /�����ڷ� ���ڸ� ���� �ڸ� �� ���ڸ� ���� �и�
			if (a != b && b != c && c != a && a != 0 && b != 0 && c != 0) {
				break;
			}
			else if ((a == b || b == c || c == a) && (a != 0 && b != 0 && c != 0)) { // �� ������ Ȱ��
				printf(" (No same number allowed!) \n");
			}
			else {
				printf(" (Number 0 is illegal!) \n");
			}
		}
		else if (inputs <= 99) {
			printf(" (Too few numbers!) \n");
		}
		else {
			printf(" (Too many numbers!) \n");
		}
	}
	input[0] = a; input[1] = b; input[2] = c;
}

 void strikefunction() {  // ��Ʈ����ũ ������ ���ְ� ����� ��, �� ���� vic ������ �����ϴ� �Լ�
	 int str = 0;
	for (int i = 0; i < 3; i++) {
		if (num[i] == input[i]) { // �� ������ Ȱ��
			str++; // ���� ������ Ȱ��
		}
	}
	printf(" %dS ", str);
	vic = str;
}

void ballfunction() {  // �� ������ ���ְ� ������ִ� �Լ�
	int ball = 0;
	for (int i = 0; i < 3; i++) {
		if (num[i] == input[(i + 1) % 3] || num[i] == input[(i + 2) % 3]) {  // �������� ������ִ� %�����ڸ� Ȱ���� ��� ������������ �迭�� �� ����(0, 1, 2)�� ��� ������ �� �ֵ��� Ȱ��
			ball++;
		}
	}
	printf("%dB \n", ball);
}

int main() {
	srand(time(NULL));
	while (1) {
		for (int i = 0; i < 3; i++) {
			num[i] = rand() % 9 + 1;
		}
		if (num[0] != num[1] &&  num[1] != num[2] && num[0] != num[2]) {
			break;
		}
	}
	printf("The Answer: %d %d %d \n", num[0], num[1], num[2]); // ������ ���� ��� �Է�
	for (int i = 0; i < 9; i++) { //  9���� ��⸦ �� �� ����� �������
		inputfuction();
		strikefunction();
		ballfunction();
		if (vic == 3) {
			printf("Victory!! \n");
			break;
		}
	}
	if (vic != 3) {
		printf("You lost! \n");
	}
	return 0;
}