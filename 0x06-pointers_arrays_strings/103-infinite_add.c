#include "main.h"
/**
 * infinite_add - a function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: buffer size
 * Return: returns a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j = 0;

	for (i = 0; size_r[i] != '\0'; i++)
	{
		for (j = 0; size_r[j] != '\0'; j++)
		{
			if (n1 && n2 != 0 || size_r[j] != '\0')
			{
				r = n1 + n2;
				return (r);
			} 
			else
			{
				return (0);
			}
		}
	}
}
