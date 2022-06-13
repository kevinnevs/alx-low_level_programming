#include "main.h"

/**
 * swap_int - swaps the value sof integers
 *
 * @a: value of a
 * @b: value of b
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
