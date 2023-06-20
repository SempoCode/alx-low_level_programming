#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees the space previously allocated to the struch dog
 * @d: pointer to struct dog memory to free
 * Return nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
