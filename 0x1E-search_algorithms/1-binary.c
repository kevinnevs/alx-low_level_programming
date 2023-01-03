#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - funct that searches value in sorted array of integers
 * @array: pointer to first elem of array to search
 * @size: the number of elem in array
 * @value: the value to search for
 * Return: value is present or array is NULL, if not -1
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		int mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
	printf("\n");

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		left = mid + 1;
	}
	else
	{
		right = mid - 1;
	}
	}

	return (-1);
}


