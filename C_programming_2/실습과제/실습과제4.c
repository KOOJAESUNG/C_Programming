#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int main() {
	srand((int)time(NULL));
	int a[5][5] = { rand() % 100 };
	int sum = 0, min = a[0][0], max = a[0][0];
	printf("배열 a\n");
	for (int i = 0; i < 5; i++) {
		for (int k = 0; k < 5; k++) {
			if (i != 0 || k != 0)	a[i][k] = rand() % 100;
			printf("%d ", a[i][k]);
			sum += a[i][k];
			if (a[i][k] < min)	min = a[i][k];
			if (a[i][k] > max)	max = a[i][k];
		}
		printf("\n");
	}
	printf("\n\n");
	printf("원소의 합: %d\n\n", sum);
	printf("가장 작은 값: %d\n\n", min);
	printf("가장 큰 값: %d\n\n", max);
}