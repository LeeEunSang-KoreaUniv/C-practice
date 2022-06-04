#include <stdio.h>
#include <string.h>

/*  작성자 : 이은상
	제목 : 3장 예제  */

int main()
{
	printf("<3장 예제>\n\n");

	// <예제 3-1> 
	printf(" [예제 3-1]\n");
	int a1;
	int b1, c1;
	double da1;
	char ch;
	a1 = 10;
	b1 = a1;
	c1 = a1 + 20;
	da1 = 3.5;
	ch = 'A';
	printf("변수 a의 값 : %d\n", a1);
	printf("변수 b의 값 : %d\n", b1);
	printf("변수 c의 값 : %d\n", c1);
	printf("변수 da의 값 : %.1lf\n", da1);
	printf("변수 ch의 값 : %c\n", ch);

	//---------------
	printf("\n\n");
	//---------------

	// <예제 3-2>
	printf(" [예제 3-2]\n");
	char ch1 = 'A';
	char ch2 = 65;
	printf("문자 %c의 아스키 코드 값 : %d\n", ch1, ch2);
	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch2);

	//---------------
	printf("\n\n");
	//---------------

	// <예제 3-3>
	printf(" [예제 3-3]\n");
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;
	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);

	//---------------
	printf("\n\n"); 
	//---------------

	// <예제 3-4>
	printf(" [예제 3-4]\n");
	unsigned int a4;
	a4 = 4294967295;
	printf("%d\n", a4);
	a4 = -1;
	printf("%u\n", a4);

	//---------------
	printf("\n\n");
	//---------------

	// <예제 3-5>
	printf(" [예제 3-5]\n");
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;
	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20lf\n", db);

	//---------------
	printf("\n\n");
	//---------------

	// <예제 3-6>
	printf(" [예제 3-6]\n");
	char fruit6[20] = "strawberry";
	printf("딸기 : %s\n", fruit6);
	printf("딸기쨈 : %s %s\n", fruit6, "jam");

	//---------------
	printf("\n\n");
	//---------------

	// <예제 3-7>
	printf(" [예제 3-7]\n");
	char fruit7[20] = "strawberry";
	printf("%s\n", fruit7);
	strcpy(fruit7, "banana");
	printf("%s\n", fruit7);

	//---------------
	printf("\n\n");
	//---------------

	// <예제 3-8>
	printf(" [예제 3-8]\n");
	int income = 0;
	double tax;
	const double tax_rate = 0.12;
	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	//---------------
	printf("\n\n");
	//---------------

	// <예제 3-9>
	printf(" [예제 3-9]\n");
	int a9;
	scanf("%d", &a9);
	printf("입력된 값 : %d\n", a9);

	//---------------
	printf("\n\n"); getchar();
	//---------------

	// <예제 3-10>
	printf(" [예제 3-10]\n");
	int age;
	double height;
	printf("나이와 키를 입력하세요 : ");
	scanf("%d %lf", &age, &height); 
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	//---------------
	printf("\n\n"); getchar();
	//---------------
	
	// <예제 3-11>
	printf(" [예제 3-11]\n");
	char grade;
	char name[20];
	printf("학점 입력 : ");
	scanf("%c", &grade); 
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);
	return 0;
}