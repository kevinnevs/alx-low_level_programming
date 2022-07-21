#include "main.h"
/**
 * binary_ro_uint - a func that converts binary to unsigned int
 * @b: char to convert
 * Return: converted num, or 0 if b is NULL, not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			x = (x << 1) | 1;
		else if (*b == '0')
			x <<= 1;
		else
			return (0);
		b++;
	}
	return (x);
}
