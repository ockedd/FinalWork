// LAB5.cpp: ���������� ����� ����� ��� ����������� ����������.
//
#include "stdafx.h"
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
setlocale(LC_ALL, "rus");
int facto = 1;
int ne = 1;
double xs;
double suma = 1; // �������� ����� 
double s21 = 0;
double s32 = 0;
printf("������� x: ");
scanf_s("%lf", &xs);
do {
facto *= ne;
s21 = s32;
s32 = pow(xs, ne) / facto;
suma += s32;
ne++;
} while (s32 - s21 >= 0.001);
printf("����� �����: %4lf\n", suma);
return 0;
}