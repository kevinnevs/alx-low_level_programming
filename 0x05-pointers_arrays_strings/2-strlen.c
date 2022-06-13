#include "main.h"

/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Returns: returns length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
