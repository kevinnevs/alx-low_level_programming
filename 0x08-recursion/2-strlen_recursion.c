#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string to check the length
 * Return: returns the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
