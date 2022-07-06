#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints name
 * @name: the name to print
 * @f: the function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
