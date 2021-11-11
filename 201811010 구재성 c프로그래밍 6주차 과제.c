#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//3번문제
	printf("3. 사용자로부터 3개의 정수를 읽어들인 후에 if-else 문을 사용하여 가장 작은 값을 결정하는 프로그램을 작성하라\n\n");

	int value1, value2, value3, result;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d%d%d", &value1, &value2, &value3);

	if (value1 <= value2)
		result = value1;
	else 
		result = value2;
	if (result >= value3)
		result = value3;

	printf("제일 작은 정수는 %d입니다.\n\n\n", result);



	//8번문제
	printf("8. 놀이공원의 자유이용권의 가격을 계산하는 프로그램을 작성하여 보자. 입장료는 다음과 같은 조건으로 결정된다. 현재 시간과 사용자의 나이를 입력받아서 지불하여야 하는 요금을 화면에 출력한다\n\n");

	int time, age;

	printf("현재 시간과 나이를 입력하시오: ");
	scanf("%d%d", &time, &age);

	if (time <= 17 && (age > 12 && age < 65))
		printf("요금은 34000입니다.\n\n\n");
	else if (time <= 17 && ((age >= 3 && age <= 12) || age >= 65))
		printf("요금은 25000입니다.\n\n\n");
	else
		printf("요금은 10000입니다.\n\n\n");


	//Mini project
	printf("Mini project. \"올바른 삼각형 구별하기\"를 위한 프로그램에서 입력한 3변으로 삼각형을 만들 수 있는 경우 이를 다시 정삼각형, 직각삼각형, 이등변삼각형, 일반삼각형으로 구분하여 출력하는 프로그램을 작성하라\n\n");
	
	int a, b, c;

	printf("삼각형의 3변을 입력하시오: ");
	scanf("%d%d%d", &a, &b, &c);

	if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
		printf("올바른 삼각형\n\n\n");
		if (a == b == c)
			printf("정삼각형\n\n\n");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
			printf("직각삼각형\n\n\n");
		else if (a == b || a == c || b == c)
			printf("이등변삼각형\n\n\n");
		else
			printf("일반삼각형\n\n\n");
	}

	else
		printf("올바르지 않은 삼각형\n\n\n");
}