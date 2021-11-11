#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//Lab: 사칙 연산 문제
	printf("Lab: 사칙 연산\n\n");

	int x, y;
	int sum, diff, mul, div;

	x = 20, y = 10;

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("첫번째 수: %d   두번째 수: %d  \n", x, y);
	printf("두 수의 합: %d\n", sum);
	printf("두 수의 차: %d\n", diff);
	printf("두 수의 곱: %d\n", mul);
	printf("두 수의 몫: %d\n\n\n", div);


	//덧셈프로그램
	printf("덧셈프로그램\n\n");

	int a, b;
	int sum_1;

	printf("첫번째 숫자를 입력하시오:");
	scanf("%d", &a); //(에러코드 C4996) visual studio의 경고에 따라 _CRT_SECURE_NO_WARNINGS 사용

	printf("\n두번째 숫자를 입력하시오:");
	scanf("%d", &b); 

	sum_1 = a + b;

	printf("\n두 수의 합 = %d\n\n\n", sum_1);


	//연봉 계산기 프로그램
	printf("연봉 계산기\n\n");

	int ysalary, msalary;

	printf("연봉을 입력하시오(단위: 만원): ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;

	printf("\n월수령액(단위: 만원): %d\n\n\n", msalary);


	//원의 면적 계산 프로그램
	printf("원의 면적 계산기\n\n");

	float radius;
	float area;

	printf("반지름을 입력하시오:");
	scanf("%f", &radius);
	
	area = 3.14 * radius * radius;

	printf("\n원의 면적: %f\n\n\n", area);


	//환율 계산 프로그램
	printf("환율 계산기\n\n");

	double rate, usd;
	int krw;

	printf("환율을 입력하시오: ");
	scanf("%lf", &rate);

	printf("\n원화 금액을 입력하시오: ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("\n원화 %d원은 %lf달러 입니다\n\n\n", krw, usd);


	//사각형의 둘레와 면적 구하기
	printf("사각형의 둘레와 면적 계산기\n\n");

	double w, h, area_1, perimeter;

	printf("높이를 입력하시오:");
	scanf("%lf", &h);

	printf("\n가로 길이를 입력하시오:");
	scanf("%lf", &w);

	area_1 = w * h;
	perimeter = 2 * (w + h);

	printf("\n사각형의 넓이: %lf\n\n사각형의 둘레: %lf\n", area_1, perimeter);
}