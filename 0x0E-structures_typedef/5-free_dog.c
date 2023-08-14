#include "dog.h"
/**
 * free_dog - creates a new dog
 * dog_t - Typedef for struct dog
 * @d: a pointer to dog_t
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		free(d->name);
		if (d->owner)
		free(d->owner);
	}
	free(d);
}
