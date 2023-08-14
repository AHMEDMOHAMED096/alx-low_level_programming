#include "dog.h"
/**
 * print_dog - prints a struct dog
 * struct dog - a structure of dog's data
 * @d: a pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	else if (d->name == NULL || d->owner == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("%s\n", d->owner);
	}
}
