#include <stdio.h>
#include "dog.h"
/**
 * init_dog - This is the function initialising the struct dog
 * struct dog - This is the struct
 * @d: structure object.
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
