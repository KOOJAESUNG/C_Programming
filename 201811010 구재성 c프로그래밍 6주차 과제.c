#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	//3������
	printf("3. ����ڷκ��� 3���� ������ �о���� �Ŀ� if-else ���� ����Ͽ� ���� ���� ���� �����ϴ� ���α׷��� �ۼ��϶�\n\n");

	int value1, value2, value3, result;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d%d%d", &value1, &value2, &value3);

	if (value1 <= value2)
		result = value1;
	else 
		result = value2;
	if (result >= value3)
		result = value3;

	printf("���� ���� ������ %d�Դϴ�.\n\n\n", result);



	//8������
	printf("8. ���̰����� �����̿���� ������ ����ϴ� ���α׷��� �ۼ��Ͽ� ����. ������ ������ ���� �������� �����ȴ�. ���� �ð��� ������� ���̸� �Է¹޾Ƽ� �����Ͽ��� �ϴ� ����� ȭ�鿡 ����Ѵ�\n\n");

	int time, age;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�: ");
	scanf("%d%d", &time, &age);

	if (time <= 17 && (age > 12 && age < 65))
		printf("����� 34000�Դϴ�.\n\n\n");
	else if (time <= 17 && ((age >= 3 && age <= 12) || age >= 65))
		printf("����� 25000�Դϴ�.\n\n\n");
	else
		printf("����� 10000�Դϴ�.\n\n\n");


	//Mini project
	printf("Mini project. \"�ùٸ� �ﰢ�� �����ϱ�\"�� ���� ���α׷����� �Է��� 3������ �ﰢ���� ���� �� �ִ� ��� �̸� �ٽ� ���ﰢ��, �����ﰢ��, �̵�ﰢ��, �Ϲݻﰢ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��϶�\n\n");
	
	int a, b, c;

	printf("�ﰢ���� 3���� �Է��Ͻÿ�: ");
	scanf("%d%d%d", &a, &b, &c);

	if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
		printf("�ùٸ� �ﰢ��\n\n\n");
		if (a == b == c)
			printf("���ﰢ��\n\n\n");
		else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
			printf("�����ﰢ��\n\n\n");
		else if (a == b || a == c || b == c)
			printf("�̵�ﰢ��\n\n\n");
		else
			printf("�Ϲݻﰢ��\n\n\n");
	}

	else
		printf("�ùٸ��� ���� �ﰢ��\n\n\n");
}