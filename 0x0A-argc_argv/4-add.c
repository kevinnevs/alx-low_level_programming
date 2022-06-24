#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the main function
 * @argc : argument count
 * @argv: argument vector
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int i;
	sum = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
