#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b, c;
	for (int i = 0; i < 5; i++) {
		printf("���� ������ �Է��Ͻÿ�:");
		scanf("%d", &a);
		printf("���� ������ �Է��Ͻÿ�:");
		scanf("%d", &b);
		printf("���� ������ �Է��Ͻÿ�:");
		scanf("%d", &c);

		if (a + b > c && b + c > a && a + c > a) {
			if (a == b && b == c && a == c) {
				printf("���ﰢ���Դϴ�.\n");
				continue;
			}
			else if (a == b || b == c || a == c) {
				printf("�̵�ﰢ���Դϴ�.\n");
				continue;
			}
			else if (a * a + b * b == c * c || b * b == c * c == a * a || a * a + c * c == b * b) {
				printf("�����ﰢ���Դϴ�.\n");
				continue;
			}
			else {
				printf("�Ϲݻﰢ���Դϴ�.\n");
				continue;
			}
		}
		printf("�ﰢ���� �ƴմϴ�.\n");
	}
}