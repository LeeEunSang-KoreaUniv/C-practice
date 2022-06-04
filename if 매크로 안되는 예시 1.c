#include <stdio.h>
#define ADD (num1 < num2)


int main() {
	int num1 = 1, num2 = 3;
#if (ADD) 
		printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

	return 0;
}