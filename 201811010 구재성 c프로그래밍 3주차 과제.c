#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//Lab: ��Ģ ���� ����
	printf("Lab: ��Ģ ����\n\n");

	int x, y;
	int sum, diff, mul, div;

	x = 20, y = 10;

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("ù��° ��: %d   �ι�° ��: %d  \n", x, y);
	printf("�� ���� ��: %d\n", sum);
	printf("�� ���� ��: %d\n", diff);
	printf("�� ���� ��: %d\n", mul);
	printf("�� ���� ��: %d\n\n\n", div);


	//�������α׷�
	printf("�������α׷�\n\n");

	int a, b;
	int sum_1;

	printf("ù��° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &a); //(�����ڵ� C4996) visual studio�� ��� ���� _CRT_SECURE_NO_WARNINGS ���

	printf("\n�ι�° ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &b); 

	sum_1 = a + b;

	printf("\n�� ���� �� = %d\n\n\n", sum_1);


	//���� ���� ���α׷�
	printf("���� ����\n\n");

	int ysalary, msalary;

	printf("������ �Է��Ͻÿ�(����: ����): ");
	scanf("%d", &ysalary);

	msalary = ysalary / 12;

	printf("\n�����ɾ�(����: ����): %d\n\n\n", msalary);


	//���� ���� ��� ���α׷�
	printf("���� ���� ����\n\n");

	float radius;
	float area;

	printf("�������� �Է��Ͻÿ�:");
	scanf("%f", &radius);
	
	area = 3.14 * radius * radius;

	printf("\n���� ����: %f\n\n\n", area);


	//ȯ�� ��� ���α׷�
	printf("ȯ�� ����\n\n");

	double rate, usd;
	int krw;

	printf("ȯ���� �Է��Ͻÿ�: ");
	scanf("%lf", &rate);

	printf("\n��ȭ �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("\n��ȭ %d���� %lf�޷� �Դϴ�\n\n\n", krw, usd);


	//�簢���� �ѷ��� ���� ���ϱ�
	printf("�簢���� �ѷ��� ���� ����\n\n");

	double w, h, area_1, perimeter;

	printf("���̸� �Է��Ͻÿ�:");
	scanf("%lf", &h);

	printf("\n���� ���̸� �Է��Ͻÿ�:");
	scanf("%lf", &w);

	area_1 = w * h;
	perimeter = 2 * (w + h);

	printf("\n�簢���� ����: %lf\n\n�簢���� �ѷ�: %lf\n", area_1, perimeter);
}