#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, i;
	int sum = 0;
	printf("양의 정수를 입력하시오: ");
	scanf("%d", &n);
	while (n != 0) {
		sum = sum + n % 10;
		n = n / 10;
	}
	printf("%d\n", sum);
}