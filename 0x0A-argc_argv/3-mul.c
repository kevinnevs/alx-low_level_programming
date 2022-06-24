#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoic(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}

