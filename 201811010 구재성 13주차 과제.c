#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define pi 3.14

double cal_area(double r)
{
    double result;
    result = pi * r * r;
    return result;
}

int year_366(char year)
{
    int result;
    if ((year % 100 != 0 && year % 4 == 0)||year%400==0) {
        result = 366;
    }
    else result = 365;
    return result;
}

int is_multiple(int n, int m)
{
    int result;
    if (n % m == 0)
        result = 1;
    else result = 0;
    return result;
}

double get_distance(double x1, double y1, double x2, double y2)
{
    double result;
    result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return result;
}

int is_prime()
{
    int n, i;

    for (n = 2; n <= 100; n++) {
        for (i = 2; i < n; i++) {
            if (n % i == 0)
                break;
        }
        if (n == i)
            printf("%d ", n);
    }
}


int main()
{
    //3번 문제
    printf("원의 면적을 구하는 문제를 함수로 작성하라.\n\n");
    double r;
    double result;
    printf("원의 반지름을 입력하시오: ");
    scanf("%lf", &r);
    getchar();
    result = cal_area(r);
    printf("원의 면적은 %lf 입니다.", result);
    printf("\n\n\n");
   

    //4번문제
    printf("사용자가 입력한 연도가 윤년인지를 출력하는 프로그램을 작성하라.\n\n");
    int year, result_1;
    printf("연도를 입력하시오: ");
    scanf("%d", &year);
    getchar();
    result_1 = year_366(year);
    printf("%d년은 %d일입나다.", year, result_1);
    printf("\n\n\n");

    
    //13번 문제
    printf("두 개의 정수 n, m을 입력받아서 n이 m의 배수인지 판별하는 프로그램을 작성하라.\n\n");
    int n, m, result_2, alpha;
    printf("첫번째 정수를 입력하시오: ");
    scanf("%d", &n);
    getchar();
    printf("두번째 정수를 입력하시오: ");
    scanf("%d", &m);
    getchar();
    if (n < m) {
        alpha = n;  n = m; m = alpha;
    }
    result_2 = is_multiple(n,m);
    if (result_2 != 0)
        printf("%d는 %d의 배수입니다.",n,m);
    else printf("%d는 %d의 배수가 아닙니다.",n,m);
    printf("\n\n\n");
    

    //14번 문제
    printf("두 점 사이의 거리를 계산하는 프로그램을 작성하라.\n\n");
    int x1, y1, x2, y2;
    double result_3;
    printf("첫번째 점의 좌표를 입력하시오: ");
    scanf("%d%d", &x1, &y1);
    getchar();
    printf("두번째 점의 좌표를 입력하시오: ");
    scanf("%d%d", &x2, &y2);
    getchar();
    result_3 = get_distance(x1, y1, x2, y2);
    printf("두 점 사이의 거리는 %lf입니다.", result_3);
    printf("\n\n\n");
    

    //15번 문제
    printf("2부터 100 사이의 모든 소수를 출력하는 함수를 작성하라.\n\n");
    is_prime();

}

