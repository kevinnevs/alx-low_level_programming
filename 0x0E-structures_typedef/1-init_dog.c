#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a var of tpe struct dog
 * @d: struct name
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return Always (0) success
 */
void init_dog(struct dog *d, char *name, float age char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
