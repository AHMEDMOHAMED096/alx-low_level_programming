#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a structure of dog's data
 * @name: first variable
 * @age: second variable
 * @owner: third variable
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
