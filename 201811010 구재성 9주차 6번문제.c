#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int value2, value3, result;
    char value1;

    do {
        printf("***************************\n");
        printf("A---- Add\nS---- Subtract\nM---- Multiply\nD---- Divide\nQ---- Quit\n");
        printf("***************************\n");
      a: 
        printf("������ �����Ͻÿ�(�ѱ��ڸ� �Է��Ͻÿ�): ");

        scanf("%c", &value1);
        getchar();
       
        if (value1 == 'A') {
            printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &value2, &value3);
            getchar();
            result = value2 + value3;
            printf("%d\n", result);

        }
        else if (value1 == 'S') {
            printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &value2, &value3);
            getchar();
            result = value2 - value3;
            printf("%d\n", result);
        }
        else if (value1 == 'M') {
            printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &value2, &value3);
            getchar();
            result = value2 * value3;
            printf("%d\n", result);
        }
        else if (value1 == 'D') {
            printf("�� ���� �������� �и��Ͽ� �Է��Ͻÿ�: ");
            scanf("%d %d", &value2, &value3);
            getchar();
            result = value2 / value3;
            printf("%d\n", result);
        }
        else if (value1 == 'Q') {
            break;
        }
        else goto a;
            
           
    } while (1);
}