#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: pointer to the name
 * @age: dog's age
 * @owner: pointer to the owner
 * Return: struct dog, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
