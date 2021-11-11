#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//2번문제
	printf("1부터 100사이의 모든 3의 배수의 합을 계산하여 출력하는 프로그램을 반복 구조를 사용하여 작성하라.\n\n");

	int sum = 0, i;

	for (i = 0; i <= 100; i++) {
		if (i % 3 == 0)
			sum += i;
	}

	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.\n\n\n", sum);


	//3번문제
	printf("사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램을 작성하라.\n\n");

	int divisor, i_1, n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	printf("약수: ");

	for (i_1 = 1; i_1 <= n; i_1++) {
		if(n % i_1 == 0)
			printf("%d ", i_1);
	}

	printf("\n\n\n");


	//5번문제
	printf("중첩 반복문을 사용하여서 다음과 같이 출력하는 프로그램을 작성하여 보자.\n\n");

	int a, b, number;

	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	for (b = 1; b <= number; b++) {
		for (a = 1; a <= b; a++)
			printf("%d ", a);
		printf("\n");
	}

	printf("\n\n\n");


	//7번문제
	printf("2와 100 사이에 있는 모든 소수를 찾는 프로그램을 작성하라. 정수가 소수가 되려면 1과 자기 자신만을 약수로 가져야 한다.\n\n");

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


	//9번문제
	printf("(1+2+3+...+n)가 1000을 넘지 않으면서 가장 큰 값과 그 때의 n값을 구하라.\n\n");

	int i_3, sum_1 = 0, result;

	for (i_3 = 1; sum_1 <= 10000; i_3++) {
		sum_1 = sum_1 + i_3;
	}
	result = sum_1 - (i_3 - 1);
	printf("1부터 %d까지의 합이 %d입니다.\n\n", i_3 - 2, result);	
}