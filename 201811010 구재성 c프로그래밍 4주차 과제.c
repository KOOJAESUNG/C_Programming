#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{
	// ��������
	printf("0. ��������\n\n");

	int light_speed = 300000;
	int distance = 149600000;
	int time, min, sec;

	time = distance / light_speed;
	min = time / 60;
	sec = time % 60;

	printf("���� �ӵ��� %dkm/s\n", light_speed);
	printf("�¾�� �������� �Ÿ� %dkm\n", distance);
	printf("���� �ð��� %d��", time);
	printf("���� �ð��� %d�� %d��\n\n\n", min, sec);
	 

	//4�� ����
	printf("4. ������ ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͽ� ����. ���Ǵ� ����*�ʺ�*���̷� ���ȴ�. ����, �ʺ�, ���̴� ��� double���� �Ǽ��� �Է¹޾� ����.\n\n");
	
	int width, vertical, height, result;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%d %d %d", &width, &vertical, &height);

	result = width * vertical * height;

	printf("������ ���Ǵ� %d �Դϴ�.\n\n\n", result);

	
	//5�� ����
	printf("5. �츮���󿡼� ���� ���Ǵ� ������ ������ ���� �������ͷ� ȯ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ���⼭ 1���� 3.3m^2�̴�. �������� �ڷ����� � ���� �����ϴ� ���� ������? ��ȣ ����� �̿��Ͽ� 1��� �������͸� ��Ÿ�����.\n\n");

	const double SQMETER_PER_PYEONG = 3.3058;
	double pyeong, result1;

	printf("���� �Է��Ͻÿ�: ");
	scanf("%lf", &pyeong);

	result1 = pyeong * SQMETER_PER_PYEONG;

	printf("%lf�������Դϴ�.\n\n\n", result1);


	//7�� ����
	printf("7. �����п��� ��������� E=mv^2/2.0���� ���ȴ�. ����ڷκ��� ����(m)�� �ӵ�(v)�� �޾Ƽ� �������(E)�� ����ϴ� ���α׷��� �ۼ��Ͽ� ����. ��� ������ double���� ����϶�.\n\n");

	double mass, speed, physical_E;
	
	printf("����(kg): ");
	scanf("%lf", &mass);
	printf("�ӵ�(m/s) ");
	scanf("%lf", &speed);

	physical_E = (mass * speed * speed) / 2;
	
	printf("�������(J): %lf\n\n\n", physical_E);


	//8�� ����
	printf("8. ����ڰ� �ƽ�Ű �ڵ尪�� �Է��ϸ� �� �ƽ�Ű �ڵ尪�� �ش��ϴ� ���ڸ� ����ϴ� ���α׷��� �ۼ��϶�.\n\n");

	int askii;
	
	printf("�ƽ�Ű �ڵ尪�� �Է��Ͻÿ�: ");
	scanf("%d", &askii);
	printf("���� %c�Դϴ�.", askii);

	return 0;
}