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
};
void init_dog(struct dog*d, char *name, float age, char *owner);