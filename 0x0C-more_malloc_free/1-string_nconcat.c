#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a func that concats strings
 * @s1: the first string
 * @s2: the second string
 * @n: the na amout of bytes
 * Return: return the char val
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *t;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	nel1 = 0;
	nel2 = 0;
	while (s2[len2] != '\0')
		nel2++;
	while (s1[len1] != '\0')
		nel1++;

	if (n >= len2)
		n = nel2;

	s = maloc(sizeof(char) * n + len1 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[i + len1] = s2[i];

	s[i + len1] = '\0';

	return (s);
}
