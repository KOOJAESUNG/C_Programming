#include<stdio.h>

int main(void)
{
	/*1번 문제*/
	printf("1. 자신의 이름과 학번, 학과 등을 3줄에 걸쳐서 출력하는 프로그램을 작성하여 보자.\n\n");
	printf("이름: 구재성\n");
	printf("학번: 201811010\n");
	printf("학과: 생명공학과\n\n\n");

	/*2번 문제*/
	printf("2. 다음과 같은 형태로 출력하는 프로그램을 작성하여 보자. 단 printf()는 한번만 호출하여야 한다.\n\n");
	printf("Hello\nC\nProgrammers!\n\n\n");

	/*3번 문제*/
	int a = "리포트", b = "학과: 생명공학과", c = "학번: 201811010", d = "성명: 구재성";
	printf("3. 리포트 표지를 출력하는 프로그램을 작성하여 보자.\n\n");
	printf("************************************************\n");
	printf("                    리포트\n");
	printf("************************************************\n\n");
	printf("************************************************\n");
	printf("                                학과: 생명공학과\n");
	printf("                                학번: 201811010\n");
	printf("                                성명: 구재성\n\n\n");

	/*5번 문제*/
	printf("5. 7과 8을 가지고 사칙연산을 한 결과를 다음과 같이 출력하는 프로그램을 작성하라.\n\n");
	printf("%d+%d=%d\n", 7, 8, 7 + 8);
	printf("%d-%d=%d\n", 7, 8, 7 - 8);
	printf("%d*%d=%d\n", 7, 8, 7 * 8);
	printf("%d/%d=%d\n", 7, 8, 7 / 8);
}