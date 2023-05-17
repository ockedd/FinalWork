// LAB5.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
setlocale(LC_ALL, "rus");
int fact = 1, n = 1;
double x, sum = 1, s1 = 0, s2 = 0;
printf("Введите x: ");
scanf_s("%lf", &x);
do {
fact *= n;
s1 = s2;
s2 = pow(x, n) / fact;
sum += s2;
n++;
} while (s2 - s1 >= 0.001);
printf("Сумма равна: %4lf\n", sum);
return 0;
}