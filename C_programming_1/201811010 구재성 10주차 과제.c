#include<stdio.h>

int main(void)
{
	//1������ ������ �Է����� �޾� �� �ڸ����� �ִ� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int num, sum = 0;
	scanf("%d", &num);
	while (num != 0) {
		sum = sum + num % 10;
		num = num / 10;
	}
	printf("%d\n\n", sum);

	//2������ �Էµ� ���ڸ� �Ųٷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int num_1;
	scanf("%d", &num_1);
	while (num_1 != 0) {
		printf("%d", num_1 % 10);
		num_1 = num_1 / 10;
	}
	printf("\n\n");

	//3������ ���� n�� k�� �Է����� �޾� n�� k���� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int n, k, result = 1, i = 0;
	scanf("%d%d", &n, &k);
	while (i < k) {
		result = result*n;
		i++;
	}
	printf("%d\n\n", result);
	

	//4������ ����ڰ� 0�� �Է��ϱ� ������ ���� ������ �о�鿩 �Էµ� �� �� ���� ū ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	int num_2 = 1, max = 0;
	while (num_2 != 0) {
		scanf("%d", &num_2);
		if (num_2 > max)
			max = num_2;
	}
	printf("%d", max);
}