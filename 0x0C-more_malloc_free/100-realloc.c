#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - a func that reallocates old to new, set conditions frm prlbem
 * returing dest w size of malloc new_size, set src as ptr
 * @ptr: pointer to mem prev alloc, must free end
 * @old_size: input old
 * @new_size: new input
 * Return: Always (0) Success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest, *src;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);

	src = ptr;

	for (i = 0; i < new_size && i < old_size; i++)
		dest[i] = src[i];
	free(ptr);

	return (dest);
}
