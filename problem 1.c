#include <stdio.h>

int main() {
	int t = 0;
	printf("Test Case = ");
	scanf("%d", &t);
	int t_list[50][9] = {0,};
	for (int i = 0; i < t; i++) {
		printf("x1 = "); scanf("%d", &t_list[i][0]);
		printf("y1 = "); scanf("%d", &t_list[i][1]);
		printf("r1 = "); scanf("%d", &t_list[i][2]);
		printf("x2 = "); scanf("%d", &t_list[i][3]);
		printf("y2 = "); scanf("%d", &t_list[i][4]);
		printf("r2 = "); scanf("%d", &t_list[i][5]);

		t_list[i][6] = ((t_list[i][0] - t_list[i][3]) * (t_list[i][0] - t_list[i][3])) + ((t_list[i][1] - t_list[i][4]) * (t_list[i][1] - t_list[i][4])); // center distance
		t_list[i][7] = (t_list[i][2] + t_list[i][5]) * (t_list[i][2] + t_list[i][5]); // R plus
		t_list[i][8] = (t_list[i][2] - t_list[i][5]) * (t_list[i][2] - t_list[i][5]); // R minus
	
		printf("Test Case %d complete \n\n", i+1); 
	}
	for (int j = 0; j < t; j++) {
		if ((t_list[j][6] > t_list[j][7]) || (t_list[j][6] < t_list[j][8])) {
			printf("Result of Case %d = 0\n", j+1);
		}
		else if ((t_list[j][6] == t_list[j][7]) || (t_list[j][6] == t_list[j][8])) {
			printf("Result of Case %d = 1\n", j+1);
		}
		else {
			printf("Result of Case %d = 2\n", j+1);
		}
	}

	return 0;
}