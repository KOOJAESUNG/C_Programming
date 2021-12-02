#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void complete(char board[3][3]) {
	int i, k, countxo, countxx, countxyx, countxyo;
	for (i = 0; i < 3; i++) {
		countxo = 0, countxx = 0;
		for (k = 0; k < 3; k++) {
			if (board[k][i] == 'O') {
				countxo += 1;
				if (countxo >= 3)
					printf("OÀÇ ½Â¸®\n");
			}
			else if (board[k][i] == 'X') {
				countxx += 1;
				if (countxx >= 3)
					printf("XÀÇ ½Â¸®\n");
			}
		}
	}
	for (i = 0; i < 3; i++) {
		countxo = 0, countxx = 0;
		for (k = 0; k < 3; k++) {
			if (board[i][k] == 'O') {
				countxo += 1;
				if(countxo >= 3)
					printf("OÀÇ ½Â¸®\n");
			}	
			else if(board[i][k] == 'X') {
				countxx += 1;
				if (countxx >= 3)
					printf("XÀÇ ½Â¸®\n");
			}
		}
	}
	countxyx = 0, countxyo = 0;
	for (i = 0, k = 0; i < 3, k < 3; i++, k++) {
		if (board[i][k] == 'X') {
			countxyx += 1;
			if (countxyx >= 3)
				printf("XÀÇ ½Â¸®\n");
		}
		if (board[i][k] == 'O') {
			countxyo += 1;
			if (countxyo >= 3)
				printf("OÀÇ ½Â¸®\n");
		}
	}
	countxyx = 0, countxyo = 0;
	for (i = 2, k = 0; i>-1, k < 3; i--, k++) {
		if (board[i][k] == 'X') {
			countxyx += 1;
			if (countxyx >= 3)
				printf("XÀÇ ½Â¸®\n");
		}
		if (board[i][k] == 'O') {
			countxyo += 1;
			if (countxyo >= 3)
				printf("OÀÇ ½Â¸®\n");
		}
	}

}
int main()
{
	char board[3][3];
	int x, y, k, i;

	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';
	}

	for (k = 0; k < 9; k++) {
		printf("ÁÂÇ¥(x,y):");
		scanf("%d %d", &x, &y);
		if (board[x][y] != ' ') {
			printf("´Ù½Ã ¼±ÅÃÇÏ¼¼¿ä\n");
			k--;
			continue;
		}
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");	
		complete(board);
	}

}

