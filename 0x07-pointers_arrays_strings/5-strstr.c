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
	int i;
	int j;
	int k = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j] && needle[j] != '\0')
		{
			j++;
			k++;
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return(0);
}
