#include <stdio.h>

/*  작성자 : 이은상
	제목 : 2장 예제  */

int main()
{
	printf("<2장 예제>\n\n");

	// <예제 2-1> 
	printf(" [예제 2-1]\n");
	10 + 20;

	//---------------
	printf("\n\n");
	//---------------

	// <예제 2-2>
	printf(" [예제 2-2]\n");
	printf("Be happy");
	printf("My friend");

	//---------------
	printf("\n\n");
	//---------------

	// <예제 2-3>
	printf(" [예제 2-3]\n");
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");

	//---------------
	printf("\n\n");
	//---------------

	// <예제 2-4>
	printf(" [예제 2-4]\n");
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);
	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	//---------------
	printf("\n\n");
	//---------------

	// <예제 2-5>
	printf(" [예제 2-5]\n");
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);

	//---------------
	printf("\n\n");
	//---------------

	// <예제 2-6>
	printf(" [예제 2-6]\n");
	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);

	//---------------
	printf("\n\n");
	//---------------

	// <예제 2-7>
	printf(" [예제 2-7]\n");
	printf("%c\n", 'A');
	printf("%s\n", "A");
	printf("%c는 %s입니다.\n", '1', "first");

	return 0;
}