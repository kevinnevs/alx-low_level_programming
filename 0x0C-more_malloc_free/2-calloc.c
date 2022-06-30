#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - a func that prints 0s int o 2D grid
 * @nmemb: array num
 * @size: size of an array element
 * Return: Always (0) Success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
