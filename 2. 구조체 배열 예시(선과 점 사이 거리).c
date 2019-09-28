#include <stdio.h>
#include <math.h>

typedef struct {
	double xpos;
	double ypos;
} point;

void whatisthelinefunc(point pos1, point pos2, double* num1, double* num2, double* num3) {   // �Էµ� �� ���� ������ ������ �������� �����ִ� �Լ�
	double x1 = pos1.xpos; double y1 = pos1.ypos;
	double x2 = pos2.xpos; double y2 = pos2.ypos;
	double a = y2 - y1; double b = x1 - x2; double c = x2 * y1 - x1 * y2;
	*num1 = a; *num2 = b; *num3 = c;
	printf("��(%g, %g), (%g, %g)�� ������ ������ �������� (%gx)+(%gy)+(%g)=0 �Դϴ�. \n", x1, y1, x2, y2, a, b, c);
};

double distanceofthedotandline(double a, double b, double c, point pos) {   // ������ �����İ� �� ���� ���� �� �� ������ �Ÿ��� �Ǽ��� ���·� ������ִ� �Լ�
	double dis = (fabs((a * pos.xpos + b * pos.ypos + c)) / sqrt((a * a + b * b)));
	return dis;
}

int main() {
	double a, b, c;
	point pos[2];
	for (int i = 0; i < 2; i++) {
		printf("%d ��° �� (x,y) �Է�: ", i + 1);
		scanf_s("%lg %lg", &(pos[i].xpos), &(pos[i].ypos));
	}
	if ((pos[0].xpos == pos[1].xpos) && (pos[0].ypos == pos[1].ypos)) {
		printf("1 ��°�� �Էµ� ���� 2 ��°�� �Էµ� ���� ���� ���� ���̹Ƿ� ������ �������� ���� �� �����ϴ�.");
		return;
	}
	else {
		whatisthelinefunc(pos[0], pos[1], &a, &b, &c);
		point pos1;
		printf("3 ��° �� (x, y) �Է�: ");
		scanf_s("%lg %lg", &pos1.xpos, &pos1.ypos);
		double dis = distanceofthedotandline(a, b, c, pos1);
		printf("���� (%gx)+(%gy)+(%g)=0 �� �� (%g, %g) ���� �Ÿ��� %g �Դϴ�", a, b, c, pos1.xpos, pos1.ypos, dis);
		return;
	}
}
