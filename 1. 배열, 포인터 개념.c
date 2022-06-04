#include <stdio.h>


int main()
{
	int arr[10];
	int* pnum = arr;
	printf("%p %p %p %p \n", arr, &arr, &(&(&(&(&(&pnum))))), &pnum);  // &연산자에 피연산자로 변수를 주면 그 변수의 주소값을 반환하지만 포인터상수를 준다면 그냥 그 포인터 상수를 그대로 반환한다.
	printf("%d %d", sizeof(pnum), sizeof(arr));


    int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int* ip = (int*)& a + 5;
	char* cp = (char*)& a + 12;
	printf("%d\n", *ip++);
	printf("%d\n", *(int*)cp);
	ip = (int*)((double*)ip - 3);
	cp = (char*)((int*)cp + 3);
	printf("%d\n", *ip);
	printf("%d\n", *(int*)cp);;
	{
		int a;
	}

	return 0;
}
