#include <stdio.h>


typedef struct big_dec {
	char sign;
	short length;
	short dec[100];
} Big_dec;

void init_big_dec(Big_dec* pbd) {
	pbd->sign = 0;
	pbd->length = 0;
	for (int i = 0; i < pbd->length; i++) {
		pbd->dec[i] = 0;
	}
}

int a_to_big_dec(char str[], Big_dec* pbd) {
	int k;
	for (k = 0;; k++) {
		if (str[k] == '\0') {
			break;
		}
	}
	for (int i = 0; i < k - 1; i++) {
		pbd->dec[i] = str[k - i - 1]-48;
		if (pbd->dec[i] > 9 || pbd->dec[i] < 0) {
			return -1;
		}
	}
	pbd->length = k - 1;
	if (str[0] == '+') {
		pbd->sign = 1;
	}
	else if (str[0] == '-') {
		pbd->sign = -1;
	}
	else {
		pbd->sign = 0;
	}
	return pbd->length;
}

int main() {
	Big_dec dec1;
	char str[102];
	while (1) {
		printf("100자리 이하의 정수 입력: ");
		scanf_s("%s", str, 102);
		if (a_to_big_dec(str, &dec1) < 0) {
			printf("정수의 형태로 재입력해주세요!\n");
			init_big_dec(&dec1);
		}
		else {
			break;
		}
	}
	if (dec1.sign == 1) {
		printf("+");
	}
	else if (dec1.sign == -1) {
		printf("-");
	}
	else {
		printf("0");
	}
	if (dec1.sign != 0) {
		for (int i = 0; i < dec1.length; i++) {
			printf("%d", dec1.dec[dec1.length-1-i]);
		}
	}
	return 0;
}
