#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char *sh = "0";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
