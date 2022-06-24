#include "main.h"
#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%d\n", argc -1);
	return (0);
}
