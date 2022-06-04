#include <stdio.h>
#include<stdlib.h>


/* 
이 코드는 직사각형 땅의 넓이와 부분당 비옥도를 입력받고 그 위에 농사를 지을 직사각형 밭의 넓이를 입력받아 
그 넓이만큼 농사를 할 때 어느 부분에 농사를 지어야 비옥도면에서 최대 이득을 얻을 수 있는지 찾아주는 코드이다.  

<입력 예시>
 땅의 가로 길이: 3
 땅의 세로 길이: 3
 밭의 가로 길이: 2
 밭의 가로 길이: 2
 비옥도 1번째 줄 : 1 1 1
 비옥도 2번째 줄 : 1 3 3
 비옥도 3번째 줄 : 4 4 4
 <출력값>
 비옥도 최대 합 : 14
 <농사지을 땅>
 3 3
 4 4
*/

typedef struct {
	int width;
	int height;
} Area;

int k[100][100];

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
	printf("\n비옥도 입력 (%d x %d) \n", area1.width, area1.height);
	for (int j = 0; j < area1.height; j++) {
		printf("%d번째 줄: ", j + 1);
		for (int i = 0; i < (area1.width); i++) {
			scanf_s("%d", &(k[j][i])); //%d 다음에 스페이스가 있으면 같이 입력받으므로 안됨 -> 그냥 반복문으로 scanf 여러개 띄워놓고 입력폼을 내가 알맞게 넣어주면 됨. 복잡하게 생각 ㄴㄴ
		}
	}
	int ksum=0, maxksum = 0; //maxksum은 비옥도합의 최댓값 
	int xpos=0, ypos=0;
	//일단 밭의 시작지점을 찍어준다.
	for (int j = 0; j < (area1.height - area2.height + 1); j++) {
		for (int i = 0; i < (area1.width - area2.width + 1); i++) {
			//시작점을 기준으로 밭의 비옥도의 총합을 구한다.
			for (int y = 0; y < area2.height; y++) { 
				for (int x = 0; x < area2.width; x++) {
					ksum += k[j + y][i + x];
				}
			}
			if (ksum > maxksum) {
				maxksum = ksum;
				xpos = i; ypos = j;
			}
			ksum = 0; //시작점을 바꾸기 전에 ksum값은 다시 0으로 초기화 해준다.
		}
	}
	printf("\n***밭의 비옥도의 합의 최댓값: %d *** \n", maxksum);
	printf("\n<농사짓기 제일 좋은 땅> \n");
	for (int q = 0; q < area2.height; q++) {
		printf("  ");
		for (int p = 0; p < area2.width; p++) {
			printf("%d ", k[ypos + q][xpos + p]);
		}
		printf("\n");
	}

 	return 0;
}