#include <stdio.h>
#include <math.h>

typedef struct {
	double xpos;
	double ypos;
} point;

void whatisthelinefunc(point pos1, point pos2, double* num1, double* num2, double* num3) {   // 입력된 두 점을 지나는 직선의 방정식을 세워주는 함수
	double x1 = pos1.xpos; double y1 = pos1.ypos;
	double x2 = pos2.xpos; double y2 = pos2.ypos;
	double a = y2 - y1; double b = x1 - x2; double c = x2 * y1 - x1 * y2;
	*num1 = a; *num2 = b; *num3 = c;
	printf("점(%g, %g), (%g, %g)을 지나는 직선의 방정식은 (%gx)+(%gy)+(%g)=0 입니다. \n", x1, y1, x2, y2, a, b, c);
};

double distanceofthedotandline(double a, double b, double c, point pos) {   // 직선의 방정식과 한 점이 있을 때 둘 사이의 거리를 실수의 형태로 출력해주는 함수
	double dis = (fabs((a * pos.xpos + b * pos.ypos + c)) / sqrt((a * a + b * b)));
	return dis;
}

int main() {
	double a, b, c;
	point pos[2];
	for (int i = 0; i < 2; i++) {
		printf("%d 번째 점 (x,y) 입력: ", i + 1);
		scanf_s("%lg %lg", &(pos[i].xpos), &(pos[i].ypos));
	}
	if ((pos[0].xpos == pos[1].xpos) && (pos[0].ypos == pos[1].ypos)) {
		printf("1 번째로 입력된 점과 2 번째로 입력된 점이 서로 같은 점이므로 직선의 방정식을 세울 수 없습니다.");
		return;
	}
	else {
		whatisthelinefunc(pos[0], pos[1], &a, &b, &c);
		point pos1;
		printf("3 번째 점 (x, y) 입력: ");
		scanf_s("%lg %lg", &pos1.xpos, &pos1.ypos);
		double dis = distanceofthedotandline(a, b, c, pos1);
		printf("직선 (%gx)+(%gy)+(%g)=0 와 점 (%g, %g) 사이 거리는 %g 입니다", a, b, c, pos1.xpos, pos1.ypos, dis);
		return;
	}
}
