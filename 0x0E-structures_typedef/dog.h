#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of the dog
 * @name: dog name
 * @age: dog age
 * @owner: dogs owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
