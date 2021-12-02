#include<stdio.h>

int main(void)
{
	//1번문제 정수를 입력으로 받아 각 자릿수에 있는 수를 더하여 출력하는 프로그램을 작성하시오.
	int num, sum = 0;
	scanf("%d", &num);
	while (num != 0) {
		sum = sum + num % 10;
		num = num / 10;
	}
	printf("%d\n\n", sum);

	//2번문제 입력된 숫자를 거꾸로 출력하는 프로그램을 작성하시오.
	int num_1;
	scanf("%d", &num_1);
	while (num_1 != 0) {
		printf("%d", num_1 % 10);
		num_1 = num_1 / 10;
	}
	printf("\n\n");

	//3번문제 정수 n과 k를 입력으로 받아 n의 k승을 계산하여 출력하는 프로그램을 작성하시오.
	int n, k, result = 1, i = 0;
	scanf("%d%d", &n, &k);
	while (i < k) {
		result = result*n;
		i++;
	}
	printf("%d\n\n", result);
	

	//4번문제 사용자가 0을 입력하기 전까지 양의 정수를 읽어들여 입력된 값 중 가장 큰 수를 출력하는 프로그램을 작성하시오.
	int num_2 = 1, max = 0;
	while (num_2 != 0) {
		scanf("%d", &num_2);
		if (num_2 > max)
			max = num_2;
	}
	printf("%d", max);
}