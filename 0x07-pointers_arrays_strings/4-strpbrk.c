#include "main.h"
/**
 * _strpbrk - a function to search a string for any set of bytes
 * @s: the string to search from
 * @accept: accpeted arrays
 * Return: returns the new value
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
