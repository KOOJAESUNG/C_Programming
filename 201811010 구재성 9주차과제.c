#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//2������
	printf("1���� 100������ ��� 3�� ����� ���� ����Ͽ� ����ϴ� ���α׷��� �ݺ� ������ ����Ͽ� �ۼ��϶�.\n\n");

	int sum = 0, i;

	for (i = 0; i <= 100; i++) {
		if (i % 3 == 0)
			sum += i;
	}

	printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�.\n\n\n", sum);


	//3������
	printf("����ڰ� �Է��� ������ ��� ����� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.\n\n");

	int divisor, i_1, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("���: ");

	for (i_1 = 1; i_1 <= n; i_1++) {
		if(n % i_1 == 0)
			printf("%d ", i_1);
	}

	printf("\n\n\n");


	//5������
	printf("��ø �ݺ����� ����Ͽ��� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͽ� ����.\n\n");

	int a, b, number;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &number);

	for (b = 1; b <= number; b++) {
		for (a = 1; a <= b; a++)
			printf("%d ", a);
		printf("\n");
	}

	printf("\n\n\n");


	//7������
	printf("2�� 100 ���̿� �ִ� ��� �Ҽ��� ã�� ���α׷��� �ۼ��϶�. ������ �Ҽ��� �Ƿ��� 1�� �ڱ� �ڽŸ��� ����� ������ �Ѵ�.\n\n");

	int n_1, i_2;

	for (n_1 = 2; n_1 <= 100; n_1++) {
		for (i_2 = 2; i_2 < n_1; i_2++) {
			if (n_1 % i_2 == 0)
				break;
		}
		if (n_1 == i_2) 
			printf("%d ", n_1);
	}

	printf("\n\n\n");


	//9������
	printf("(1+2+3+...+n)�� 1000�� ���� �����鼭 ���� ū ���� �� ���� n���� ���϶�.\n\n");

	int i_3, sum_1 = 0, result;

	for (i_3 = 1; sum_1 <= 10000; i_3++) {
		sum_1 = sum_1 + i_3;
	}
	result = sum_1 - (i_3 - 1);
	printf("1���� %d������ ���� %d�Դϴ�.\n\n", i_3 - 2, result);	
}