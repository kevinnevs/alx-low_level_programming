#include "main.h"
#include "2-get_bit.c"
/**
 * set_bit - a function that sets value of bit to 1 at given index
 * @n: the int
 * @index: the index
 * Return: 1 if successful, -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
