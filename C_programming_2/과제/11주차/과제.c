#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include<stdio.h>
#include<string.h>
#include<time.h>

void print_array(char a[][50]) {
	printf("�迭\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%s\n", a[i]);
	}
	printf("\n\n");
}

void sort(char a[][50]) {
	int least;
	char temp[50];
	for (int i = 0; i < SIZE; i++) {
		least = i;
		for (int k = i + 1; k < SIZE; k++) {
			if (strcmp(a[k], a[least]) < 0) {
				least = k;
			}
		}
		strcpy(temp, a[i]);
		strcpy(a[i], a[least]);
		strcpy(a[least], temp);
	}
}

int test(char a[][50]) {
	int score = 0;
	int rand_num1;
	int rand_num2;
	int len;
	char str[50];
	for (int i = 0; i < SIZE; i++) {
		len = strlen(a[i]);
		rand_num1 = rand() % len;
		rand_num2 = rand() % len;
		while (rand_num1 == rand_num2) {
			rand_num2 = rand() % len;
		}
		int temp;
		if (rand_num1 > rand_num2) {
			temp = rand_num1;
			rand_num1 = rand_num2;
			rand_num2 = temp;
		}
		strcpy(str, a[i]);
		str[rand_num1] = '_';
		str[rand_num2] = '_';
		char val1;
		char val2;
		printf("����%d: %s\n", i + 1, str);
		printf("ù��° ���� �Է�: ");
		scanf("%c", &val1);
		getchar();
		printf("�ι�° ���� �Է�: ");
		scanf("%c", &val2);
		getchar();
		str[rand_num1] = val1;
		str[rand_num2] = val2;
		if (strcmp(str, a[i]) == 0) {
			printf("�����Դϴ�.\n");
			score += 20;
		}
		else
			printf("�����Դϴ�. ������ %s�Դϴ�.\n", a[i]);
	}
	return score;
}

int main() {
	srand((int)time(NULL));
	char words[5][50];
	printf("�ܾ 5�� �Է��Ͻÿ�\n");
	for (int i = 0; i < SIZE; i++) {
		scanf("%s", &words[i]);
		getchar();
	}
	printf("\n");
	sort(words);
	print_array(words);
	int score = test(words);
	printf("���� 5�� �� %d���� ���߼̽��ϴ�. 100�� ������ %d���Դϴ�.\n", score / 20, score);
}