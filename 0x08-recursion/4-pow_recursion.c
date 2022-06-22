#include "main.h"
/**
 * _pow_recursion - a function that returns value of x raised to pow y
 * @x: the value to be raised
 * @y: the valie to power
 * Return: Always (0) Success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
