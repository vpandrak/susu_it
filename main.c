#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //настройка кодировки
    system("chcp 1251");
    system("cls");
    double x1, y1, x2, y2;
    printf("Введите координаты первой точки (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Введите координаты второй точки (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Расстояние между двумя точками: %.2f\n", distance);
    getchar(); getchar();
    return 0;
}