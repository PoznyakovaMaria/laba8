#include <locale.h>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3,4

int main() {
	setlocale(LC_ALL, "RUS");
	for (int start = 1; start <= 1; start++)
		putchar('/');
	for (int start = 1; start <= 1; start++)
		putchar('!');
	for (int start = 1; start <= 10; start++)
		putchar('*');
	for (int start = 1; start <= 1; start++)
		putchar('+');
	for (int start = 1; start <= 1; start++)
		putchar('!');

	int n, m, i;
	int s = 0;
	puts("\n������� �������� ���������� n");
	scanf_s("%d", &n);
	puts("������� �������� ���������� m");
	scanf_s("%d", &m);
	for (i = m; i >= n; i--)
		s += i;
	printf("��������� %d ���", i++);
	printf("��������� %d", s);

	int step;
	puts("\n������� �������");
	scanf_s("%d", &step);
	for (int i = 0; i <= step; i++) {
		double result = pow(2, i);
		printf("2^%d = %.fl\n", i, result);
	}
	double last_s = pow(2, step);
	double result2 = last_s / 1024.0;
	printf("��������� = - %.1lfk\n\n", result2);

	//������� 2
	int star = 1;
	int end = 3;
	int shag;
	printf("������� y = x^2 - cos^2 �x\n\n");
	printf("������� ���\n\n");
	scanf_s("%d", &shag);

	for (int x = star; x <= end; x += shag) {
		double y = (pow(x, 2) - pow(cos(x * M_PI), 2));
		printf("|  %d\t|  %.f\t|\n", x, y);
		printf("----------------\n");
	}

}