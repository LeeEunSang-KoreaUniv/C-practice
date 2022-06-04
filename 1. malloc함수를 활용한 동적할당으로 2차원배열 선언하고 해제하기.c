#include <stdio.h>
#include<stdlib.h>

typedef struct {
	int width;
	int height;
} Area;

int main() {
	Area area1;
	while (1) {
		printf("땅의 가로 길이: ");
		scanf_s("%d", &area1.width);
		printf("땅의 세로 길이: ");
		scanf_s("%d", &area1.height);
		if (3 <= area1.width && area1.width <= 100 && 3 <= area1.height && area1.height <= 100) {
			break;
		}
		else {
			printf(" (땅의 넓이는 가로, 세로 길이는 모두 3이상 100이하 이어야합니다! 재입력해주세요.) \n");
		}
	}
	printf("\n");
	Area area2;
	while (1) {
		printf("밭의 가로 길이: ");
		scanf_s("%d", &area2.width);
		printf("밭의 세로 길이: ");
		scanf_s("%d", &area2.height);
		if (1 <= area2.width && area2.width <= area1.width && 1 <= area2.height && area2.height <= area1.height) {
			break;
		}
		else {
			printf(" (밭의 넓이는 가로 길이는 1이상 %d이하, 세로 길이는 1이상 %d이하 이어야합니다! 재입력해주세요.) \n", area1.width, area1.height);
		}
	}
	// 동적할당을 활용한 2차원배열 선언하기  -> 속도를 높이고싶다면 그냥 넉넉한 크기의 배열을 선언해라!!

	//방법 1)
	   //선언
	int** k = (int**) malloc (sizeof(int*) * area1.height);
	for (int i = 0; i < area1.height; i++) {
		k[i] = (int*)malloc(sizeof(int) * area1.width);
	}
	  //해제
	for (int i = 0; i < area1.height; i++) {
		free(k[i]);
	}
	free(k);


	
/*	//방법 2)
	  //선언
	int** arr;
	arr = (int**)malloc(sizeof(int*) * area1.height);
	arr[0] = (int*)malloc(sizeof(int) * area1.width * area1.height);
	for (int i = 1; i < area1.height; i++) {
		arr[i] = arr[i - 1] + area1.width;
	}
      //해제
	free(arr[0]);
	free(arr);
	*/


	return 0;
}