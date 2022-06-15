#include "main.h"
/**
 * _strcat - this is a function that concatenates two string
 *
 * @dest: destination string
 * @src: source string
 * @n: amount of times to append 
 * Return: returing a pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n && src[i] != '\0'; j++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
