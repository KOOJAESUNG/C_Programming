#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void print_array(char a[][50]) {
	printf("배열\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", a[i]);
	}
	printf("\n\n");
}

void sort(char a[][50]) {
	int least;
	char temp[50];
	for (int i = 0; i < 5; i++) {
		least = i;
		for (int k = i + 1; k < 5; k++) {
			if (strcmp(a[k], a[least]) < 0) {
				least = k;
			}
		}
		strcpy(temp, a[i]);
		strcpy(a[i], a[least]);
		strcpy(a[least], temp);
	}
}

int main() {
	char words[5][50];
	printf("단어를 5개 입력하시오\n");
	for (int i = 0; i < 5; i++) {
		scanf("%s", &words[i]);
	}
	printf("\n\n");
	print_array(words);
	sort(words);
	print_array(words);
}