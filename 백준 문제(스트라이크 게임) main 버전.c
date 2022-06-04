#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int num[3];
	int input[3];
	srand(time(NULL));

	while (1) {
		for (int i = 0; i < 3; i++) {
			num[i] = rand() % 9 + 1;
		}
		if (num[0] != num[1] &&  num[1] != num[2] && num[0] != num[2]) {
			break;
		}
	}     // 난수 함수를 통해 답안 세 수를 입력받음

	int inputs, a, b , c;
	while (1) {
		printf("Enter 3 numbers: ");
		scanf_s("%d", &inputs);
		if (99 < inputs && inputs < 1000) {
			a = inputs / 100;
			b = (inputs - a * 100) / 10;
			c = inputs - a * 100 - b * 10;
			if (a != b && b != c && c != a && a!=0 && b!=0 && c!=0) {
				printf(" Input: %d %d %d \n", a, b, c);
				break;
			}
			else if((a==b || b==c || c==a) && (a != 0 && b != 0 && c != 0)) {
				printf(" (No same number allowed!) \n");
			}
			else {
				printf(" (Number 0 is illegal!) \n");
			}
		}
		else if(inputs <= 99) {
			printf(" (Too few numbers!) \n");
		}
		else {
			printf(" (Too many numbers!) \n");
		}

	} 
	input[0] = a; input[1] = b; input[2] = c;
	int str = 0, ball = 0;
	for (int i = 0; i < 3; i++) {
		if (num[i] == input[i]) {
			str++;
		}
		else if (num[i] == input[(i + 1) % 3] || num[i] == input[(i + 2) % 3]) {
			ball++;
		}
	}
	printf("    %dS, %dB", str, ball);

	return 0;
}