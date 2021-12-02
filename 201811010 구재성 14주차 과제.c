#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define score 5

void printnum(int num[]) {
	for (int i = 0; i < score; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
}

void numchange(int num[]) {
	int i, min=0, max=0, dummy;
	for (i = 0; i < score; i++) {
		if (num[i] < num[min]) {
			min = i;
		}
		if (num[i] > num[max])
			max = i;
	}
	dummy = num[min];
	num[min] = num[max];
	num[max] = dummy;
}

void sort(int num[]) {
	int i, j, x, dummy;
	for (i = 0; i < score; i++) {
		x = i;
		for (j=i; j < score; j++) {
			if (num[j] < num[x]) {
				x = j;
			}
		}
		dummy = num[x];
		num[x] = num[i];
		num[i] = dummy;
	}
}


int main()
{
	int num[score];
	printf("%d개의 정수를 입력하시오.\n",score);
	for (int i = 0; i < score; i++) {
		printf("%d번째 정수: ", i + 1);
		scanf("%d", &num[i]);
	}
	printnum(num);
	numchange(num);
	printnum(num);
	sort(num);
	printnum(num);
}