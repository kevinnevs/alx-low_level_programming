#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an index
 * @array: array to check
 * @size: size of the array
 * @cmp: pointer to the function to compare values
 * Return: o if success, -1 if function does not return / no elem match / siz=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
