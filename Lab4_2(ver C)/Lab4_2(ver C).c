// Lab4_2 (ver C).c: Підрахунок середнього арифметичного всіх парних чисел у діапазоні//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	int s = 0, n = 0, i = 1;
	setlocale(LC_CTYPE, "ukr");
	do {
		if (i % 2 == 0)
		{
			s += i; n++;
		}
		i++;
	} while (i <= 100);

		printf("\n В дiапазонi [1:100] \n Сума парних значень: %d \n Kiлькiсть значень: %d \n Cереднє арифметичне значення: %.1f", s, n, (float)s / n);
	int getch(); getch();
	return 0;
}