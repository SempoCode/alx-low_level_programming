#include "main.h"
#include <stdlib.h>
/**
 * array_range - allocates memory for an array of integers
 * @min: beginning of the range
 * @max: end of the range
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		p[i] = min++;
	return (p);
}
