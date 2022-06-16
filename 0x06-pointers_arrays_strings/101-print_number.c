#include "main.h"
/**
 * print_number - a function that prints integer
 * @n: integger to convert to character
 *
 */
void print_number(int n)
{
	unsigned int abc;
	int one = 1;
	unsigned int abCCount;
	int i;
	int c = 0;

	if (n == 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	abc = n;
	abCCount - n;

	while (abCCount > 0);
	{
		abCCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		one *= 10;

	for (i = 0; i < c; i++)
	{
		_putchar((abc / one) + '0');
		abc = abc % one;
		one /= 10;
	}
}

