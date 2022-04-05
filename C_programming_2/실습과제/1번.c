#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float r, h;
	printf("원의 반지름을 입력하시오: ");
	scanf("%f", &r);
	printf("원의 넓이: %f\n",r*r*3.14);
	printf("원의 둘레: %f\n", 2 * 3.14 * r);
	printf("원기둥의 높이를 입력하시오: ");
	scanf("%f", &h);
	printf("원기둥의 부피: %f\n", r * r * 3.14 * h);
	printf("원기둥의 겉넓이: %f\n", 2 * 3.14 * r * h);
	printf("구의 부피: %f\n", 4 / 3.0 * 3.14 * r * r * r);
}