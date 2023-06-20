#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints detail of a dog
 * @d: pointer to the struct dog
 * Return: nothimg
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";
	printf("Name: %s\nAge: %0.1f\nOwner: %s\n", d->name, d->age, d->owner);
	if (d == NULL)
		return;
}
