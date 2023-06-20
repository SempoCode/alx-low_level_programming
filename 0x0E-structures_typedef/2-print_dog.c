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
		printf("Name: nil");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: nil");
	else
		printf("Owner: %s\n", d->owner);
	if (d == NULL)
	{
		/* nothing */
	}
}