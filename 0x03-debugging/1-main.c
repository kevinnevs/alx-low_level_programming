#include <stdio.h>

/**
 * main - causes infinite loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinte loop incoming :(\n");

	i = 0;
/* don't delete it! */
	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
