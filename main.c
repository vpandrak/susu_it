#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //кодировка
    system("chcp 1251");
    system("cls");

    double x, y1, x2, y2;
    printf("Введите первую точку (x1, y1): ");
    scanf("%lf %lf", &x, &y1);
    printf("Введите вторую точку (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x, 2) + pow(y2 - y1, 2));
    printf("Расстояния между двумя точками (%lf, %lf) и (%lf, %lf): %.2f\n", x,y1,x2, y2, distance);

    getchar(); getchar();
    return 0;
}