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
        printf("연산을 선택하시오(한글자만 입력하시오): ");

        scanf("%c", &value1);
        getchar();
       
        if (value1 == 'A') {
            printf("두 수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &value2, &value3);
            getchar();
            result = value2 + value3;
            printf("%d\n", result);

        }
        else if (value1 == 'S') {
            printf("두 수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &value2, &value3);
            getchar();
            result = value2 - value3;
            printf("%d\n", result);
        }
        else if (value1 == 'M') {
            printf("두 수를 공백으로 분리하여 입력하시오: ");
            scanf("%d %d", &value2, &value3);
            getchar();
            result = value2 * value3;
            printf("%d\n", result);
        }
        else if (value1 == 'D') {
            printf("두 수를 공백으로 분리하여 입력하시오: ");
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