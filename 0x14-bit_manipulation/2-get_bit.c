#include "main.h"
/**
 * get_bit - a func to get value of bit at given index
 * @n: the value
 * @index: index to retrieve
 * Return: the value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
