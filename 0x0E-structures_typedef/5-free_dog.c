#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Entry point
 * @d: struct to be freed
 * Return: Always (0) Success
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free (d);
}
