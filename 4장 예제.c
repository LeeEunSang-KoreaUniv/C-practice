#include <stdio.h>
#include <string.h>

/*  �ۼ��� : ������
	���� : 4�� ����  */

int main()
{
	printf("<4�� ����>\n\n");

	// <���� 4-1> 
	printf(" [���� 4-1]\n");
	int a1, b1;
	int sum1, sub1, mul1, inv1;
	a1 = 10;
	b1 = 20;
	sum1 = a1 + b1;
	sub1 = a1 - b1;
	mul1 = a1 * b1;
	inv1 = -a1;
	printf("a�� �� :%d, b�� ��: %d\n", a1, b1);
	printf("���� : %d\n", sum1);
	printf("���� : %d\n", sub1);
	printf("���� : %d\n", mul1);
	printf("a�� ���� ���� : %d\n", inv1);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 4-2>
	printf(" [���� 4-2]\n");
	double apple2;
	int banana2;
	int orange2;
	apple2 = 5.0 / 2.0;
	banana2 = 5 / 2;
	orange2 = 5 % 2;
	printf("apple : %.1lf\n", apple2);
	printf("banana : %d\n", banana2);
	printf("orange : %d\n", orange2);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 4-3>
	printf(" [���� 4-3]\n");
	int a3 = 10, b3 = 10;
	++a3;
	--b3;
	printf("a : %d\n", a3);
	printf("b : %d\n", b3);

	//---------------
	printf("\n\n"); 
	//---------------

	// <���� 4-4>
	printf(" [���� 4-4]\n");
	int a4 = 5, b4 = 5;
	int pre, post;
	pre = (++a4) * 3;
	post = (b4++) * 3;
	printf("�ʱⰪ a = %d, b = %d\n", a4, b4);
	printf("������: (++a) * 3 = %d, ������: (b++) * 3 = %d\n", pre, post);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 4-5>
	printf(" [���� 4-5]\n");
	int a5 = 10, b5 = 20, c5 = 10;
	int res5;
	res5 = (a5 > b5);
	printf("a > b : %d\n", res5);
	res5 = (a5 >= b5);
	printf("a >= b : %d\n", res5);
	res5 = (a5 < b5);
	printf("a < b : %d\n", res5);
	res5 = (a5 <= b5);
	printf("a <= b : %d\n", res5);
	res5 = (a5 <= c5);
	printf("a <= c : %d\n", res5);
	res5 = (a5 == b5);
	printf("a == b : %d\n", res5);
	res5 = (a5 != c5);
	printf("a != c : %d\n", res5);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 4-6>
	printf(" [���� 4-6]\n");
	int a6 = 30;
	int res6;
	res6 = (a6 > 10) && (a6 < 20);
	printf("(a > 10) && (a < 20) : %d\n", res6);
	res6 = (a6 < 10) || (a6 > 20);
	printf("(a < 10) || (a > 20) : %d\n", res6);
	res6 = !(a6 >= 30);
	printf("! (a >= 30) : %d\n", res6);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 4-7>
	printf(" [���� 4-7]\n");
	int a7 = 10, b7 = 20, res7;
	a7 + b7;
	printf("%d + %d = %d\n", a7, b7, a7 + b7);
	res7 = a7 + b7;
	printf("%d + %d = %d\n", a7, b7, res7);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 4-8>
	printf(" [���� 4-8]\n");
	int a8 = 20, b8 = 3;
	double res8;
	res8 = ((double)a8) / ((double)b8);
	printf("a = %d, b = %d\n", a8, b8);
	printf("a / b�� ��� : %.1lf\n", res8);
	a8 = (int)res8;
	printf("(int) %.1lf�� ��� : %d\n", res8, a8);
	

	//---------------
	printf("\n\n");
	//---------------

	// <���� 4-9>
	printf(" [���� 4-9]\n");
	int a9 = 10;
	double b9 = 3.4;
	printf("int�� ������ ũ�� : %d\n", sizeof(a9));
	printf("double�� ������ ũ�� : %d\n", sizeof(b9));
	printf("������ ����� ũ�� : %d\n", sizeof(10));
	printf("������ ������� ũ�� : %d\n", sizeof(1.5 + 3.4));
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));
	
	//---------------
	printf("\n\n"); 
	//---------------

	// <���� 4-10>
	printf(" [���� 4-10]\n");
	int a10 = 10, b10 = 20;
	int res10 = 2;
	a10 += 20;
	res10 *= b10 + 10;
	printf("a = %d, b = %d\n", a10, b10);
	printf("res = %d\n", res10);

	//---------------
	printf("\n\n"); 
	//---------------
	
	// <���� 4-11>
	printf(" [���� 4-11]\n");
	int a11 = 10, b11 = 20;
	int res11;
	res11 = (++a11, ++b11);
	printf("a:%d, b:%d\n", a11, b11);
	printf("res:%d\n", res11);
	
	//---------------
	printf("\n\n"); 
	//---------------

	// <���� 4-12>
	printf(" [���� 4-12]\n");
	int a12 = 10, b12 = 20, res12;
	res12 = (a12 > b12) ? a12 : b12;
	printf("ū �� : %d\n", res12);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 4-13>
	printf(" [���� 4-13]\n");
	int a13 = 10, b13 = 12;
	printf("a & b : %d\n", a13 & b13);
	printf("a ^ b : %d\n", a13 ^ b13);
	printf("a | b : %d\n", a13 | b13);
	printf("~a : %d\n", ~a13);
	printf("a << 1 : %d\n", a13 << 1);
	printf("a >> 2 : %d\n", a13 >> 2);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 4-14>
	printf(" [���� 4-14]\n");
	int a14 = 10, b14 = 5, res14;
	res14 = a14 / b14 * 2;
	printf("res = %d\n", res14);
	res14 = ++a14 * 3;
	printf("res = %d\n", res14);
	res14 = a14 > b14&& a14 != 5;
	printf("res = %d\n", res14);
	res14 = a14 % 3 == 0;
	printf("res = %d\n", res14);

	return 0;
}