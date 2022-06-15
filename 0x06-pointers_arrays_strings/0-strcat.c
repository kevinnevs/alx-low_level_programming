#include "main.h"
/**
 * _strcat - this is a function that concatenates two string
 *
 * @dest - destination string
 * @src - source string
 *
 * Return: returing a pointer to the resulting string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[i] != '\0'; j++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
