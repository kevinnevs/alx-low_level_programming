#include "main.h"
/**
 * print_number - a function that prints integer
 * @n: integger to convert to character
 *
 */
void print_number(int n)
{
	unsigned int abs;
	int one = 1;
	unsigned int abSCount;
	int i;
	int c = 0;

	if (n == 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	abs = n;
	abSCount = n;

	while (abSCount > 0)
	{
		abSCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		one *= 10;

	for (i = 0; i < c; i++)
	{
		_putchar((abs / one) + '0');
		abs = abs % one;
		one /= 10;
	}
}

