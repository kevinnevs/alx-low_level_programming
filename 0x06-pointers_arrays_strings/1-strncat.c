#include "main.h"
/**
 * _strcat - this is a function that concatenates two string
 *
 * @dest: destination string
 * @src: source string
 * @n: shows the most times
 *
 * Return: returing a pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
