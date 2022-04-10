#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, c;
	for (int i = 0; i < 5; i++) {
		printf("양의 정수를 입력하시오:");
		scanf("%d", &a);
		printf("양의 정수를 입력하시오:");
		scanf("%d", &b);
		printf("양의 정수를 입력하시오:");
		scanf("%d", &c);

		if (a + b > c && b + c > a && a + c > a) {
			if (a == b && b == c && a == c) {
				printf("정삼각형입니다.\n");
				continue;
			}
			else if (a == b || b == c || a == c) {
				printf("이등변삼각형입니다.\n");
				continue;
			}
			else if (a * a + b * b == c * c || b * b == c * c == a * a || a * a + c * c == b * b) {
				printf("직각삼각형입니다.\n");
				continue;
			}
			else {
				printf("일반삼각형입니다.\n");
				continue;
			}
		}
		printf("삼각형이 아닙니다.\n");
	}
}