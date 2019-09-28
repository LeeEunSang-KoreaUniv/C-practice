#include <stdio.h>


int str_len(char str[]) {   // 배열의 이름을 전달받아 그 배열에 들어있는 문자열의 길이를 정수값으로 반환해주는 함수
	int i;
	for (i = 0; str[i] != '\0';i++) {
	}
	return i;
}

void reverse(char str[]) {  // 배열의 이름을 전달받아 그 배열에 들어있는 문자열의 앞뒤를 뒤집어 다시 그 배열에 저장해주는 함수
	int len = str_len(str);
	char a;
	for (int i = 0; i < (len / 2); i++) {
		a = str[i];
		str [i] = str[len - 1 - i];
		str[len - 1 - i] = a;
	}
}

int atoi(char str[]) {  // 배열의 이름을 전달받아 그 배열에 들어있는 숫자문자열을 실제 그 숫자를 나타내는 정수형 데이터로 반환해주는 함수 
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

void etoi(int num, char str[]) {  // 정수형 변수와 배열의 이름을 전달받아 정수형 변수 안에 있는 정수를 읽어 그것을 숫자문자열로 바꾸어 전달받은 배열 안에 저장해주는 함수
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
	reverse(str); // (**앞서 만든 reverse 함수를 이용하면 훨씬 간편하게 함수를 만들 수 있다. 이유는 정수를 한 자리 수씩 분리해낼 때 아래자리 수부터 분리해내는게 편하므로 일의 자리부터 차례로 분리해내어 배열에 문자형태로 저장한 뒤 마지막에 순서를 뒤집어준다.)
}


int main() {
	char str[100];
	int num;
	
	// <1. str_len 함수 테스트>
	printf("\n <1. str_len 함수 테스트> \n");
	printf("Enter string: ");
	scanf_s("%s", str, 100);
	printf("Lenth of the string: %d \n", str_len(str));
	
	// <2. reverse 함수 테스트>
	printf("\n <2. reverse 함수 테스트> \n");
	printf("Enter string: ");
	scanf_s("%s", str, 100);
	reverse(str);
	printf("Reverse of the string: %s \n", str);
	
	// <3. atoi 함수 테스트>
	printf("\n <3. atoi 함수 테스트> \n");
	printf("Enter numberstring: ");
	scanf_s("%s", str, 100);
	printf("Integer Form of the numberstring: %d \n", atoi(str));

	// <4. etoi 함수 테스트>
	printf("\n <4. etoi 함수 테스트> \n");
	printf("Enter integer: ");
	scanf_s("%d", &num);
	etoi(num, str);
	printf("String Form of the integer: %s \n", str);
	
	return 0;
} 