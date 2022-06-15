#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest : destination input
 * @src : source input
 * @n : number of bytes
 *
 * Return: returns a pointer to the resulting sting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
