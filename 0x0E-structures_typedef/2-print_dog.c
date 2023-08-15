#include "dog.h"
/**
 * print_dog - prints a struct dog
 * struct dog - a structure of dog's data
 * @d: a pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
