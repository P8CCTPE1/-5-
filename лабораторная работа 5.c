#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define M_PI 3.14159265358979323846
#define k 8.2
#define d 1

double y; // Глобальная переменная

// Прототипы функций (чтобы main видел их до определения)
int task_one();
int task_two();
int task_three();
int homework();

int main() {
    task_one();
    task_two();
    task_three();
    homework();
    return 0;
}

int task_one() {
    puts("TASK ONE----------------------");
    long double gr;
    long double rad;
    puts("Enter the value in degrees:");
    scanf_s("%lf", &gr);
    rad = gr * M_PI / 180;
    printf("The value in radians: %.6f\n", rad);
    printf("Sin = %lf\n", sin(rad));
    return 0;
}

int task_two() {
    puts("TASK TWO----------------------");
    double x;
    double a;
    puts("Set the value of x:");
    scanf_s("%lf", &x);
    double b = sqrt(fabs(x));
    a = pow(x, 4) + pow(b, 3);
    y = pow(log(a), 3) + exp(-x);
    printf("Value of y: %.6f\n", y);
    return 0;
}

int task_three() {
    puts("TASK THREE----------------------");
    int result;
    double a1;
    double b1;
    puts("Enter A:");
    scanf_s("%lf", &a1);
    puts("Enter B:");
    scanf_s("%lf", &b1);

    int A = (int)round(a1);
    int B = (int)round(b1);
    int C = (int)round(y); // Используем глобальную y из task_two

    // Проверка на четность A и B
    if ((A % 2 == 0) && (B % 2 == 0)) {
        result = 0;
    }
    else {
        result = 1;
    }
    printf("Result: %d\n", result);

    // Проверка на кратность 3 для A, B и C
    if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)) {
        result = 1;
    }
    else {
        result = 0;
    }
    printf("Result: %d\n", result);
    return 0;
}

int homework() {
    puts("HOMEWORK----------------------");
    double x1;
    double y1;
    double F;
    puts("Enter x:");
    scanf_s("%lf", &x1);
    puts("Enter y:");
    scanf_s("%lf", &y1);

    F = (pow(cos(y1), 2) + 2.4 * d) / (exp(y1) + log(pow(sin(x1), 2) + 6));
    printf("Result F: %.6f\n", F);
    return 0;
}