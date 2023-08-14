#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * struct dog - a structure of dog's data
 * @d: a pointer to struct dog
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 * Return: return void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

