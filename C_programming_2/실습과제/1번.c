#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float r, h;
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%f", &r);
	printf("���� ����: %f\n",r*r*3.14);
	printf("���� �ѷ�: %f\n", 2 * 3.14 * r);
	printf("������� ���̸� �Է��Ͻÿ�: ");
	scanf("%f", &h);
	printf("������� ����: %f\n", r * r * 3.14 * h);
	printf("������� �ѳ���: %f\n", 2 * 3.14 * r * h);
	printf("���� ����: %f\n", 4 / 3.0 * 3.14 * r * r * r);
}