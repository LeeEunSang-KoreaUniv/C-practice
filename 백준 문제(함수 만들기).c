#include <stdio.h>


int str_len(char str[]) {   // �迭�� �̸��� ���޹޾� �� �迭�� ����ִ� ���ڿ��� ���̸� ���������� ��ȯ���ִ� �Լ�
	int i;
	for (i = 0; str[i] != '\0';i++) {
	}
	return i;
}

void reverse(char str[]) {  // �迭�� �̸��� ���޹޾� �� �迭�� ����ִ� ���ڿ��� �յڸ� ������ �ٽ� �� �迭�� �������ִ� �Լ�
	int len = str_len(str);
	char a;
	for (int i = 0; i < (len / 2); i++) {
		a = str[i];
		str [i] = str[len - 1 - i];
		str[len - 1 - i] = a;
	}
}

int atoi(char str[]) {  // �迭�� �̸��� ���޹޾� �� �迭�� ����ִ� ���ڹ��ڿ��� ���� �� ���ڸ� ��Ÿ���� ������ �����ͷ� ��ȯ���ִ� �Լ� 
	int num, sum = 0;
	int len = str_len(str);
	for (int i = 0; i < len; i++) {
		num = str[i] - '0';
		for (int j = 0; j < (len - i - 1); j++) {
			num *= 10;
		}
		sum += num;
	}
	return sum;
}

void etoi(int num, char str[]) {  // ������ ������ �迭�� �̸��� ���޹޾� ������ ���� �ȿ� �ִ� ������ �о� �װ��� ���ڹ��ڿ��� �ٲپ� ���޹��� �迭 �ȿ� �������ִ� �Լ�
	int a;
	for (int i = 0; num >= 10; i++) {
		a = num / 10;
		str[i] = (num - a * 10) + '0';
		num /= 10;
		if (num < 10) {
			str[i + 1] = num + '0';
			str[i + 2] = '\0';
		}
	}
	reverse(str); // (**�ռ� ���� reverse �Լ��� �̿��ϸ� �ξ� �����ϰ� �Լ��� ���� �� �ִ�. ������ ������ �� �ڸ� ���� �и��س� �� �Ʒ��ڸ� ������ �и��س��°� ���ϹǷ� ���� �ڸ����� ���ʷ� �и��س��� �迭�� �������·� ������ �� �������� ������ �������ش�.)
}


int main() {
	char str[100];
	int num;
	
	// <1. str_len �Լ� �׽�Ʈ>
	printf("\n <1. str_len �Լ� �׽�Ʈ> \n");
	printf("Enter string: ");
	scanf_s("%s", str, 100);
	printf("Lenth of the string: %d \n", str_len(str));
	
	// <2. reverse �Լ� �׽�Ʈ>
	printf("\n <2. reverse �Լ� �׽�Ʈ> \n");
	printf("Enter string: ");
	scanf_s("%s", str, 100);
	reverse(str);
	printf("Reverse of the string: %s \n", str);
	
	// <3. atoi �Լ� �׽�Ʈ>
	printf("\n <3. atoi �Լ� �׽�Ʈ> \n");
	printf("Enter numberstring: ");
	scanf_s("%s", str, 100);
	printf("Integer Form of the numberstring: %d \n", atoi(str));

	// <4. etoi �Լ� �׽�Ʈ>
	printf("\n <4. etoi �Լ� �׽�Ʈ> \n");
	printf("Enter integer: ");
	scanf_s("%d", &num);
	etoi(num, str);
	printf("String Form of the integer: %s \n", str);
	
	return 0;
} 