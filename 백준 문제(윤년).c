#include <stdio.h>

int main() {
	int year;
	while (1) {
		printf("년도 입력: ");
		scanf_s("%d", &year);
		if (0 < year && year < 10000) {
			break;
		}
		else {
			printf("연도는 1이상, 10000미만의 정수이어야합니다. 재입력하세요. ");
		}
	}
	if ((year % 4) == 0){
	    if (year < 100) {
			printf("%d년은 윤년입니다.", year);
	    }
		else if (100 <= year && year < 400) {
			if (year % 100 == 0) {
				printf("%d년은 윤년이 아닙니다.", year);
			}
			else {
				printf("%d년은 윤년입니다.", year);
			}
		}
		else {
			if ((year % 400 == 0) || (year % 100 != 0)) {
				printf("%d는 윤년입니다.", year);
			}
			else {
				printf("%d는 윤년이 아닙니다.", year);
			}
		}
	}
	else {
		printf("%d는 윤년이 아닙니다.", year);
	}
	return 0;
}