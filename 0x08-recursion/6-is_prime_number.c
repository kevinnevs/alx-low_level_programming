#include "main.h"
/**
 * checker - checks the logic for me
 * @i: checker int
 * @n: integer I am checking
 * Return: the value
 */
int checker(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (checker (i + 1, n));
	return (1);
}
/**
 * is_prime_number - a function to check if a number is prime
 * @n: the integer to compare
 * Return: boolean
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (checker(i, n));
}
