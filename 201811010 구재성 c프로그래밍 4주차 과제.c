#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	// 도전문제
	printf("0. 도전문제\n\n");

	int light_speed = 300000;
	int distance = 149600000;
	int time, min, sec;

	time = distance / light_speed;
	min = time / 60;
	sec = time % 60;

	printf("빛의 속도는 %dkm/s\n", light_speed);
	printf("태양과 지구와의 거리 %dkm\n", distance);
	printf("도달 시간은 %d초", time);
	printf("도달 시간은 %d분 %d초\n\n\n", min, sec);
	 

	//4번 문제
	printf("4. 상자의 부피를 구하는 프로그램을 작성하여 보자. 부피는 길이*너비*높이로 계산된다. 길이, 너비, 높이는 모두 double형의 실수로 입력받아 보자.\n\n");
	
	int width, vertical, height, result;

	printf("상자의 가로 세로 높이를 한번에 입력: ");
	scanf("%d %d %d", &width, &vertical, &height);

	result = width * vertical * height;

	printf("상자의 부피는 %d 입니다.\n\n\n", result);

	
	//5번 문제
	printf("5. 우리나라에서 많이 사용되는 면적의 단위인 평을 제곱미터로 환산하는 프로그램을 작성하시오. 여기서 1평은 3.3m^2이다. 변수들의 자료형은 어떤 것을 선택하는 것이 좋은가? 기호 상수를 이용하여 1평당 제곱미터를 나타내어라.\n\n");

	const double SQMETER_PER_PYEONG = 3.3058;
	double pyeong, result1;

	printf("평을 입력하시오: ");
	scanf("%lf", &pyeong);

	result1 = pyeong * SQMETER_PER_PYEONG;

	printf("%lf평방미터입니다.\n\n\n", result1);


	//7번 문제
	printf("7. 물리학에서 운동에너지는 E=mv^2/2.0으로 계산된다. 사용자로부터 질량(m)과 속도(v)를 받아서 운동에너지(E)를 계산하는 프로그램을 작성하여 보자. 모든 변수는 double형을 사용하라.\n\n");

	double mass, speed, physical_E;
	
	printf("질량(kg): ");
	scanf("%lf", &mass);
	printf("속도(m/s) ");
	scanf("%lf", &speed);

	physical_E = (mass * speed * speed) / 2;
	
	printf("운동에너지(J): %lf\n\n\n", physical_E);


	//8번 문제
	printf("8. 사용자가 아스키 코드값을 입력하면 그 아스키 코드값에 해당하는 문자를 출력하는 프로그램을 작성하라.\n\n");

	int askii;
	
	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &askii);
	printf("문자 %c입니다.", askii);

	return 0;
}