#include <stdio.h>
#include <string.h>
#include <math.h>


struct point{
   int xpos;
   int ypos;
};
double whatsthelength(struct point a, struct point b){
   int x1=a.xpos; int y1=a.ypos;
   int x2=b.xpos; int y2=b.ypos;
   double len =sqrt((double)((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
   return len;

};
int main() {
	//struct point pos[4]={{1,2}, {2,3}, {4,6}, {6,2}};
	//double a = whatsthelength(pos[0], pos[1]);
	//double b = whatsthelength(pos[2], pos[3]);
	//printf("%g \n", a);
	//printf("%g", b);
	struct point pos[4];

	printf("좌표 입력: "); scanf_s("%d %d", &(pos[0].xpos), &(pos[0].ypos));
	printf("좌표 입력: "); scanf_s("%d %d", &(pos[1].xpos), &(pos[1].ypos));
	double a = whatsthelength(pos[0], pos[1]);
	printf("두 점 사이의 거리: %g", a);
	return 0;
}
