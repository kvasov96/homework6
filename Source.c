#include <stdio.h>
#include <math.h>
#include <locale.h>
#define _USE_MATH_DEFINES
//контрольный пример x = 2.28 y = 1.46
int main()
{
	setlocale(LC_CTYPE, "RUS");
	float x, y;
	puts("Введите x: ");
	scanf("%f", &x);
	system("pause");
	puts("\nВведите y: ");
	scanf("%f", &y);
	system("pause");
	if (x >= 0 && y >= 0 && pow(x, 2) + pow(y, 2) <= 9)
		puts("\nПринадлежит");
	else
		if (x >= 0 && y <= 0 && pow(x, 2) + pow(y, 2) <= 16)
			puts("\nПринадлежит");
		else
			puts("\nНе принадлежит");
	return 777;
}