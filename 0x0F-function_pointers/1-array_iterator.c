#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function executing a function given as a parameter
 * @action: pointer to the function to use
 * @size: size of the array
 * @array: pointer to the array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
