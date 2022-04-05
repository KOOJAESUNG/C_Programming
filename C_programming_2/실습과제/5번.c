#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, k, j;
	printf("양의 정수를 입력하시오: ");
	scanf("%d", &n);
	for (k = 2; k <= n; k++) {
		for (j = 2; j < k; j++) {
			if (k % j == 0)
				break;
		}
		if (j == k)
			printf("%d ", j);
	}
}