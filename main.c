#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //��������� ���������
    system("chcp 1251");
    system("cls");
    int x1, y1, x2, y2;
    printf("������� ���������� ������ ����� (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("������� ���������� ������ ����� (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("����������: %.2f\n", distance);
    getchar(); getchar();
    return 0;
}