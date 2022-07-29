#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int is_success(int a[][10]) {
	int result = 1;
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			result *= a[i][k];
		}
	}
	return result;
}

int is_out(int x,int y) {
	if (x > 9 || x<0 || y > 9 || y<0)
		return 1;
	else return 0;
}

void print_arr(int a[][10]) {
	for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++) {
			printf("%d ", a[i][k]);
		}
		printf("\n");
	}
}

int main() {
	srand((int)time(NULL));
	int arr[10][10] = { 0, };
	int x = 4, y = 4;
	arr[x][y] = 1;
	int count = 0;
	while (1) {
		int move = rand() % 8;
		int x_temp = x;
		int y_temp = y;
		switch (move) {
		case 0:
			y++;
			break;
		case 1:
			y++, x++;
			break;
		case 2:
			x++;
			break;
		case 3:
			x++, y--;
			break;
		case 4:
			y--;
			break;
		case 5:
			x--, y--;
			break;
		case 6:
			x--;
			break;
		case 7:
			x--, y++;
			break;
		}
		if (is_out(x, y) == 1) {
			x = x_temp;
			y = y_temp;
		}
		arr[y][x] = 1;
		count++;
		if (count == 100) {
			printf("count가 100이 되었습니다.\n\n");
			print_arr(arr);
			printf("\n\n");
		}
			
		if (is_success(arr) == 1) {
			printf("완료되었습니다.\n\n");
			print_arr(arr);
			printf("count: %d", count);
			printf("\n\n");
			break;
		}
	}
}