#include "dog.h"
#include <string.h>
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
    
    newDog->name = malloc(strlen(name) + 1);
    if (newDog->name == NULL)
	{
        free(newDog);
        return (0);
    }
    strcpy(newDog->name, name);

    newDog->owner = malloc(strlen(owner) + 1);
    if (newDog->owner == NULL)
	{
        free(newDog->name);
        free(newDog);
        return (0);
    }
    strcpy(newDog->owner, owner);
    
    newDog->age = age;
    
    return newDog;
}
