#include "dog.h"
/**
 * new_dog - creates a new dog
 * dog_t - Typedef for struct dog
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 * Return: return NULL if function fails
 */


dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *newDog = malloc(sizeof(dog_t));
    if (newDog == NULL)
	{
        return (0);
    }
    
}