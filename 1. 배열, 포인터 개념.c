#include <stdio.h>


int main()
{
	int arr[10];
	int* pnum = arr;
	printf("%p %p %p %p \n", arr, &arr, &(&(&(&(&(&pnum))))), &pnum);  // &�����ڿ� �ǿ����ڷ� ������ �ָ� �� ������ �ּҰ��� ��ȯ������ �����ͻ���� �شٸ� �׳� �� ������ ����� �״�� ��ȯ�Ѵ�.
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
