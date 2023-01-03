#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: a pointer to the first elem of array to search
 * @size: the number of elem in array
 * @value: the value to search for
 * Return: 0 success, -1 if fail
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checkked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
