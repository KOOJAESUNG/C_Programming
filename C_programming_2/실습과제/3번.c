#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, i;
	int sum = 0;
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	while (n != 0) {
		sum = sum + n % 10;
		n = n / 10;
	}
	printf("%d\n", sum);
}