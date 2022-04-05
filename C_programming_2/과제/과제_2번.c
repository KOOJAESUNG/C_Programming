#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x1 = 50, y1 = 50, x2 = 100, y2 = 100, x3, y3, x4, y4, dummy;
	for (int i = 0; i < 5; i++) {
		printf("B)두개의 좌표를 입력하시오\n");
		printf("x3 y3");
		scanf("%d %d", &x3, &y3);
		printf("x4 y4");
		scanf("%d %d", &x4, &y4);

		if (x3 > x4) {
			dummy = x3;
			x3 = x4;
			x4 = dummy;
		}
		if (y3 > y4) {
			dummy = y3;
			y3 = y4;
			y4 = dummy;
		}

		if (y2 == y4 && y3 == y1 && x3 == x1 && x2 == x4) {
			printf("B는 A와 같습니다.\n");
			continue;
		}
		else if (y2 >= y4 && y3 >= y1 && x3 >= x1 && x2 >= x4) {
			printf("B는 A에 속합니다.\n");
			continue;
		}
		else if (y2 <= y4 && y3 <= y1 && x3 <= x1 && x2 <= x4) {
			printf("A는 B에 속합니다.\n");
			continue;
		}
		else if (y3 >= y2 || y1 >= y4 || x2<x3 || x1>x4) {
			printf("겹치지않습니다.\n");
			continue;
		}
		else {
			printf("A와 B가 겹칩니다.\n");
			continue;
		}
	}
}