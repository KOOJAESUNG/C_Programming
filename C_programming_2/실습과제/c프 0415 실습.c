#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void swap(int* a, int* b) {
	int x = *a;
	*a = *b;
	*b = x;
}

void print_array(int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap_idx(int a[],int size) {
	int min, max;
	min = 0, max = 0;
	for (int i = 0; i < size; i++) {
		if (a[min] > a[i])
			min = i;
		if (a[max] < a[i])
			max = i;
	}
	swap(&a[min], &a[max]);
	print_array(a, size);
}

int search_idx(int a[], int size, int x) {
	for (int i = 0; i < size; i++) {
		if (a[i] == x) {
			return i;
		}
	}
	return -1;
}

int main()
{
	int a[5];
	printf("�迭�� 5���� ������ �Է��Ͻÿ�: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	print_array(a, sizeof(a) / sizeof(int));

	swap_idx(a, sizeof(a) / sizeof(int));
	int x;
	printf("3.ã����� ������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	int idx=search_idx(a, sizeof(a) / sizeof(int), x);
	printf("%d�� %d��°�� ��ġ�մϴ�.\n", x, idx + 1);
}