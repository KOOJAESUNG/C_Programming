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
	printf("���ھ߱����� ����\n");
	printf("------------------------------\n");
	//���� ����
	srand((unsigned)time(NULL));
	int random[3];
	make_rand(random);

	for (int i = 0; i < 3; i++)
		printf("%d\n", random[i]);
	
	int num[3];
	int strike = 0, ball = 0;
	while (strike != 3) {
		strike = 0, ball = 0;
		printf("0~9���� ���� 3���� �Է��Ͻÿ�: ");
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
		printf("%d��Ʈ����ũ, %d��\n", strike, ball);
	}
	printf("�����Դϴ�. �����մϴ�.\n");
}