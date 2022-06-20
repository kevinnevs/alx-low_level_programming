#include <stdio.h>
#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: the string to locate
 * @needle: the substring to locate
 * Return: Always (0) Success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
