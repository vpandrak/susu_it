#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //��������� �� ������� ����������
    system("chcp 1251");
    system("cls");
    // ����� �������main
    double x, y1, x2, y2;
    printf("������� ������ ����� (x1, y1): ");
    scanf("%lf %lf", &x, &y1);
    printf("������� ������ ����� (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    double result = sqrt(pow(x2 - x, 2) + pow(y2 - y1, 2));
    printf("����������� ���������� ����� ����� ������� �� ��������� (%lf, %lf) � (%lf, %lf): %.2f\n", x,y1,x2, y2, result);

    getchar(); getchar();
    return 0;
}