#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array.
 * @array: pointer to the array of integers
 * @size: the size of an array
 * @action: a pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
