#include <stdio.h>

int sum(int a, int b)
{
	int sum=0;
	for (int i = a; i <= b; i++) {
		sum = sum + i;
	}
	printf("�������� ��: %d\n", sum);
}

int mul(int a, int b)
{
	int mul = 1;
	for (int i = a; i <= b; i++) {
		mul = mul * i;
	}
	printf("�������� ��: %d\n", mul);
}

int a_b(int a, int b)
{
	int square = 1;
	for (int i=0; i < b; i++) {
		square = square*a;
	}
	printf("a^b�� ��: %d\n", square);
}

int ak_b(int a, int b)
{
	int square = 1;
	int k = 0;
	for (k;square<=b; k++) {
		square = square*a;
	}
	printf("a^k<=b�� �����ϴ� k��: %d\n", k-1);
}


int main()
{
	int first, second;
	printf("���� 2��(a,b)�� �����̽��ٷ� �����Ͽ� ���� ������ �Է��Ͻÿ�:");
	scanf("%d%d", &first, &second);
	sum(first, second);
	mul(first, second);
	a_b(first, second);
	ak_b(first, second);
}