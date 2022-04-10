#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num[10];
	int freq = 0, mode_freq = 0,mode=0;
	printf("정수 10개를 입력하시오: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 10; i++) {
		freq = 0;
		for (int k = i + 1; k < 10; k++) {
			if (num[i] == num[k]) {
				freq++;
			}
		}
		if (freq > mode_freq) {
			mode_freq = freq;
			mode = num[i];
		}
	}
	printf("최빈값: %d  빈도수: %d", mode, mode_freq+1);
}