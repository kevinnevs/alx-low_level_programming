#include "main.h"
#include "2-get_bit.c"
/**
 * clear_bit - a func that clears index to 0
 * @n: the int
 * @index: index to go to
 * Return: 1 if successful, -1 if error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
