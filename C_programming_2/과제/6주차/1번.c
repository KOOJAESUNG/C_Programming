#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void make_rand(int random[]) {
	int temp;
	for (int i = 0; i < 3; i++) {
		temp = rand() % 10;
		random[i] = temp;

		for (int j = 0; j < i; j++)
			if (temp == random[j] && i != j)
				i--;
	}
}

int main()
{
	printf("숫자야구게임 시작\n");
	printf("------------------------------\n");
	//난수 생성
	srand((unsigned)time(NULL));
	int random[3];
	make_rand(random);

	for (int i = 0; i < 3; i++)
		printf("%d\n", random[i]);
	
	int num[3];
	int strike = 0, ball = 0;
	while (strike != 3) {
		strike = 0, ball = 0;
		printf("0~9까지 정수 3개를 입력하시오: ");
		for (int i = 0; i < 3; i++) {
			scanf("%d", &num[i]);
		}

		for (int i = 0; i < 3; i++) {
			for (int k = 0; k < 3; k++) {
				if (random[i] == num[k])
					if (i == k)
						strike++;
					else
						ball++;
			}
		}
		printf("%d스트라이크, %d볼\n", strike, ball);
	}
	printf("정답입니다. 축하합니다.\n");
}