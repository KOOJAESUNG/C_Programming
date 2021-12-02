#include <stdio.h>

int sum(int a, int b)
{
	int sum=0;
	for (int i = a; i <= b; i++) {
		sum = sum + i;
	}
	printf("정수들의 합: %d\n", sum);
}

int mul(int a, int b)
{
	int mul = 1;
	for (int i = a; i <= b; i++) {
		mul = mul * i;
	}
	printf("정수들의 곱: %d\n", mul);
}

int a_b(int a, int b)
{
	int square = 1;
	for (int i=0; i < b; i++) {
		square = square*a;
	}
	printf("a^b의 값: %d\n", square);
}

int ak_b(int a, int b)
{
	int square = 1;
	int k = 0;
	for (k;square<=b; k++) {
		square = square*a;
	}
	printf("a^k<=b를 만족하는 k값: %d\n", k-1);
}


int main()
{
	int first, second;
	printf("정수 2개(a,b)를 스페이스바로 구분하여 작은 수부터 입력하시오:");
	scanf("%d%d", &first, &second);
	sum(first, second);
	mul(first, second);
	a_b(first, second);
	ak_b(first, second);
}