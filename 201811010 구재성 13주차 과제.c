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
    //3�� ����
    printf("���� ������ ���ϴ� ������ �Լ��� �ۼ��϶�.\n\n");
    double r;
    double result;
    printf("���� �������� �Է��Ͻÿ�: ");
    scanf("%lf", &r);
    getchar();
    result = cal_area(r);
    printf("���� ������ %lf �Դϴ�.", result);
    printf("\n\n\n");
   

    //4������
    printf("����ڰ� �Է��� ������ ���������� ����ϴ� ���α׷��� �ۼ��϶�.\n\n");
    int year, result_1;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &year);
    getchar();
    result_1 = year_366(year);
    printf("%d���� %d���Գ���.", year, result_1);
    printf("\n\n\n");

    
    //13�� ����
    printf("�� ���� ���� n, m�� �Է¹޾Ƽ� n�� m�� ������� �Ǻ��ϴ� ���α׷��� �ۼ��϶�.\n\n");
    int n, m, result_2, alpha;
    printf("ù��° ������ �Է��Ͻÿ�: ");
    scanf("%d", &n);
    getchar();
    printf("�ι�° ������ �Է��Ͻÿ�: ");
    scanf("%d", &m);
    getchar();
    if (n < m) {
        alpha = n;  n = m; m = alpha;
    }
    result_2 = is_multiple(n,m);
    if (result_2 != 0)
        printf("%d�� %d�� ����Դϴ�.",n,m);
    else printf("%d�� %d�� ����� �ƴմϴ�.",n,m);
    printf("\n\n\n");
    

    //14�� ����
    printf("�� �� ������ �Ÿ��� ����ϴ� ���α׷��� �ۼ��϶�.\n\n");
    int x1, y1, x2, y2;
    double result_3;
    printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�: ");
    scanf("%d%d", &x1, &y1);
    getchar();
    printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�: ");
    scanf("%d%d", &x2, &y2);
    getchar();
    result_3 = get_distance(x1, y1, x2, y2);
    printf("�� �� ������ �Ÿ��� %lf�Դϴ�.", result_3);
    printf("\n\n\n");
    

    //15�� ����
    printf("2���� 100 ������ ��� �Ҽ��� ����ϴ� �Լ��� �ۼ��϶�.\n\n");
    is_prime();

}

