#include <stdio.h>
#include <stdlib.h>

// ������ �Է¹޾� n!���� ������ִ� �ڵ�
int main()
{
    int num;
    printf("n=");
    scanf_s("%d", &num);

      int num2, value=1;
        for(num2=1; num2<=num; num2++)
           { value=num2*value;

           }

   printf("%d!=%d \n", num, value);
    return 0;
}


