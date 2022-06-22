#include "main.h"
/**
 * factorial - a function that returns a factorial of a given number
 * @n: the number to do the factorial
 * Return: Always (0) success
 */
int factiorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0) 
	{
		return 1;
	}
	if (n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
