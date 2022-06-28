#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - a func that gives array of args
 * @ac: argument count
 * @av: argument vector
 * Return: char value
 */
char *argstostr(int ac, char **av)
{
	int size;
	char *s;
	int i;
	int j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}

	size += (ac);
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
		{
			s[k++] = '\n';
		}
	}
	return (s);
}
