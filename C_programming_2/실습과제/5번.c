#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, k, j;
	printf("���� ������ �Է��Ͻÿ�: ");
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