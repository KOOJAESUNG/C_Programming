#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include<stdio.h>
#include<string.h>
#include<time.h>

void print_array(char a[][50]) {
	printf("배열\n");
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
		printf("문제%d: %s\n", i + 1, str);
		printf("첫번째 문자 입력: ");
		scanf("%c", &val1);
		getchar();
		printf("두번째 문자 입력: ");
		scanf("%c", &val2);
		getchar();
		str[rand_num1] = val1;
		str[rand_num2] = val2;
		if (strcmp(str, a[i]) == 0) {
			printf("정답입니다.\n");
			score += 20;
		}
		else
			printf("오답입니다. 정답은 %s입니다.\n", a[i]);
	}
	return score;
}

int main() {
	srand((int)time(NULL));
	char words[5][50];
	printf("단어를 5개 입력하시오\n");
	for (int i = 0; i < SIZE; i++) {
		scanf("%s", &words[i]);
		getchar();
	}
	printf("\n");
	sort(words);
	print_array(words);
	int score = test(words);
	printf("문제 5개 중 %d개를 맞추셨습니다. 100점 만점에 %d점입니다.\n", score / 20, score);
}