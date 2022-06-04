#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num[3];
int input[3];
int vic = 0; // 포인터를 안배웠으니 전역변수를 사용함

void inputfuction() {  // 세자리 수를 입력받아 자리 수들을 쪼개 분리하여 배열에 각각 저장하는 함수
	int inputs, a, b, c;
	while (1) {
		printf("Enter 3 numbers: ");
		scanf_s("%d", &inputs); 
		if (99 < inputs && inputs < 1000) { // 논리 연산자 활용
			a = inputs / 100;
			b = (inputs - a * 100) / 10;
			c = inputs - a * 100 - b * 10;   // 몫을 계산해주는 /연산자로 세자리 수의 자리 당 숫자를 따로 분리
			if (a != b && b != c && c != a && a != 0 && b != 0 && c != 0) {
				break;
			}
			else if ((a == b || b == c || c == a) && (a != 0 && b != 0 && c != 0)) { // 논리 연산자 활용
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

 void strikefunction() {  // 스트라이크 개수를 세주고 출력한 후, 그 값을 vic 변수에 전달하는 함수
	 int str = 0;
	for (int i = 0; i < 3; i++) {
		if (num[i] == input[i]) { // 논리 연산자 활용
			str++; // 증가 연산자 활용
		}
	}
	printf(" %dS ", str);
	vic = str;
}

void ballfunction() {  // 볼 개수를 세주고 출력해주는 함수
	int ball = 0;
	for (int i = 0; i < 3; i++) {
		if (num[i] == input[(i + 1) % 3] || num[i] == input[(i + 2) % 3]) {  // 나머지를 출력해주는 %연산자를 활용해 어느 시작점에서도 배열의 각 인자(0, 1, 2)에 모두 접근할 수 있도록 활용
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
	printf("The Answer: %d %d %d \n", num[0], num[1], num[2]); // 난수를 통한 답안 입력
	for (int i = 0; i < 9; i++) { //  9번의 경기를 한 후 결과를 출력해줌
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