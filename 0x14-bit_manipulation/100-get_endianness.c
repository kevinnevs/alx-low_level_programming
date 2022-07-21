#include "main.h"
/**
 * get_endianness - Entry point
 * Return: Always (0) Success
 */
int get_endianness(void)
{
	unsigned int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
