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
	unsigned int i, nel1, nel2;
	char *t;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	nel1 = 0;
	nel2 = 0;
	while (s2[nel2] != '\0')
		nel2++;
	while (s1[nel1] != '\0')
		nel1++;

	if (n >= nel2)
		n = nel2;

	s = maloc(sizeof(char) * n + nel1 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < nel1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[i + nel1] = s2[i];

	s[i + nel1] = '\0';

	return (s);
}
