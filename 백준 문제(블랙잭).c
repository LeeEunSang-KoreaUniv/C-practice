#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, M;
	while (1) {
		printf("N, M �Է� : ");
		scanf("%d %d", &N, &M);
		if (N >= 3 && N <= 100 && M >= 10 && M <= 300000) {
			break;
		}
		else {
			printf("N�� 3�̻� 100����, M�� 10�̻� 300000������ ���� �Է����ּ���. \n");
		}
	}
	int* ptr1 = NULL;
	ptr1 = malloc(sizeof(int) * N);
	if (ptr1 == NULL) {
		printf("�޸� �Ҵ� ����! \n");
	}
	else {
		printf("ī�忡 ���� ���ڸ� �Է����ּ��� : ");
		for (int i = 0; i < N; i++) {
			scanf(" %d", ptr1 + i);
		}
		int s = 0;
		for (int j1 = 0; j1 <= N-3; j1++) {
			for (int j2 = j1+1; j2 <= N - 2; j2++) {
				for (int j3 = j2+1; j3 <= N - 1; j3++) {
					if (ptr1[j1] + ptr1[j2] + ptr1[j3] <= M && ptr1[j1] + ptr1[j2] + ptr1[j3] >= s) {
						s = ptr1[j1] + ptr1[j2] + ptr1[j3];
					}
 				}
			}
		}
		printf("���� ��� : %d", s);
	}
	free(ptr1);
	return 0;
}