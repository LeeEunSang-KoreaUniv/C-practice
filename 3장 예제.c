#include <stdio.h>
#include <string.h>

/*  �ۼ��� : ������
	���� : 3�� ����  */

int main()
{
	printf("<3�� ����>\n\n");

	// <���� 3-1> 
	printf(" [���� 3-1]\n");
	int a1;
	int b1, c1;
	double da1;
	char ch;
	a1 = 10;
	b1 = a1;
	c1 = a1 + 20;
	da1 = 3.5;
	ch = 'A';
	printf("���� a�� �� : %d\n", a1);
	printf("���� b�� �� : %d\n", b1);
	printf("���� c�� �� : %d\n", c1);
	printf("���� da�� �� : %.1lf\n", da1);
	printf("���� ch�� �� : %c\n", ch);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 3-2>
	printf(" [���� 3-2]\n");
	char ch1 = 'A';
	char ch2 = 65;
	printf("���� %c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch2);
	printf("�ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch2, ch2);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 3-3>
	printf(" [���� 3-3]\n");
	short sh = 32767;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;
	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("long long�� ���� ��� : %lld\n", lln);

	//---------------
	printf("\n\n"); 
	//---------------

	// <���� 3-4>
	printf(" [���� 3-4]\n");
	unsigned int a4;
	a4 = 4294967295;
	printf("%d\n", a4);
	a4 = -1;
	printf("%u\n", a4);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 3-5>
	printf(" [���� 3-5]\n");
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;
	printf("float�� ������ �� : %.20f\n", ft);
	printf("double�� ������ �� : %.20lf\n", db);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 3-6>
	printf(" [���� 3-6]\n");
	char fruit6[20] = "strawberry";
	printf("���� : %s\n", fruit6);
	printf("����´ : %s %s\n", fruit6, "jam");

	//---------------
	printf("\n\n");
	//---------------

	// <���� 3-7>
	printf(" [���� 3-7]\n");
	char fruit7[20] = "strawberry";
	printf("%s\n", fruit7);
	strcpy(fruit7, "banana");
	printf("%s\n", fruit7);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 3-8>
	printf(" [���� 3-8]\n");
	int income = 0;
	double tax;
	const double tax_rate = 0.12;
	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n", tax);

	//---------------
	printf("\n\n");
	//---------------

	// <���� 3-9>
	printf(" [���� 3-9]\n");
	int a9;
	scanf("%d", &a9);
	printf("�Էµ� �� : %d\n", a9);

	//---------------
	printf("\n\n"); getchar();
	//---------------

	// <���� 3-10>
	printf(" [���� 3-10]\n");
	int age;
	double height;
	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d %lf", &age, &height); 
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);

	//---------------
	printf("\n\n"); getchar();
	//---------------
	
	// <���� 3-11>
	printf(" [���� 3-11]\n");
	char grade;
	char name[20];
	printf("���� �Է� : ");
	scanf("%c", &grade); 
	printf("�̸� �Է� : ");
	scanf("%s", name);
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
	return 0;
}